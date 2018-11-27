/********/
// First we include the libraries
#include <OneWire.h>
#include <DallasTemperature.h>
#include <PubSubClient.h>
#include <ESP8266WiFi.h>
/********/
// Data wire is plugged into pin 2 on the Arduino
#define ONE_WIRE_BUS 5
/********/
// Setup a oneWire instance to communicate with any OneWire devices
// (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
/********/
// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);
/********/


const char* ssid = "iotempire-jakobvali";
const char* password = "internetofthings";
const char* mqtt_server = "192.168.12.1";

WiFiClient espClient;
PubSubClient client(espClient);

void triggerButtonPressed(void);

int buttonState = 0;

int greenLED = 4;
int redLED = 14;

int raindrop = 13;

int astate = 0;

int buttonRead = 0;

float temp = 0;
char temp_string[6];
char hum_string[6];

void setup() {

  Serial.begin(115200);
  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  client.setServer(mqtt_server, 1883);

  pinMode(0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(14, OUTPUT);

  pinMode(13, INPUT);

  Serial.println("Dallas Temperature IC Control Library Demo");
  // Start up the library
  sensors.begin();
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ESP8266Client-";
    clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");
      // Once connected, publish an announcement...
      client.publish("outTopic", "hello world");
      // ... and resubscribe
      client.subscribe("house/childrens_room");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void loop() {
   if (!client.connected()) {
    reconnect();
  }
  client.loop();

  buttonState = digitalRead(0);


    if (buttonState == LOW) {
      // turn LED on:
      triggerButtonPressed();
    }
}

void triggerButtonPressed() {
  astate = analogRead(A0);

  Serial.print("A0: ");
  Serial.println(astate);
  Serial.print(" Requesting temperatures...");
  sensors.requestTemperatures(); // Send the command to get temperature readings
  Serial.print("DONE");
  /********/
  Serial.print("Temperature is: ");
  Serial.println(sensors.getTempCByIndex(0));// Why "byIndex"?
  temp = sensors.getTempCByIndex(0);
  if(astate > 900 || astate < 600 || temp < 20 || temp > 25) {
    analogWrite(redLED,255);
    analogWrite(greenLED, 0);
  }
  else {
    analogWrite(redLED,0);
    analogWrite(greenLED, 255);
    }
  dtostrf(temp, 4, 2, temp_string);
  dtostrf(astate, 4, 2, hum_string);
  client.publish("house/temperature", temp_string);
  client.publish("house/humidity", hum_string);
}

#include <Wire.h>  
#include <LiquidCrystal_I2C.h>
#include <PubSubClient.h>
#include <ESP8266WiFi.h>


const char* ssid     = "iotempire-jakobvali";
const char* password = "internetofthings";
const char* mqtt_server = "192.168.12.1";
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Set the LCD I2C address
WiFiClient espClient;
PubSubClient client(espClient);
float temp = 0;
char temp_string[10];
char hum_string[10];
int value;

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  char humidity[10];
  lcd.clear();
  if (strcmp(topic, "house/humidity")==0) {
    strncpy(hum_string, (const char*)payload, 9 );
    hum_string[9] = '\0';   /* null character manually added */
    int sum = atoi( hum_string );
    if (sum > 900) {
      strncpy(hum_string, "DRY", 3 );
      hum_string[3] = '\0';   /* null character manually added */
      }
    else if (sum < 900 && sum > 600) {
      strncpy(hum_string, "MOIST", 5 );
      hum_string[5] = '\0';   /* null character manually added */
      }
    else {
      strncpy(hum_string, "WET", 3 );
      hum_string[3] = '\0';   /* null character manually added */
      }
    }
  else if (strcmp(topic, "house/temperature")==0) {
    strncpy(temp_string, (const char*)payload, 9 );
    temp_string[9] = '\0';   /* null character manually added */
  }
  Serial.println();
  lcd.setCursor(0, 0);
  lcd.print("HUM: ");
  lcd.print(hum_string);
  lcd.setCursor(0, 1);
  lcd.print("TMP: ");      
  lcd.print(temp_string);
  lcd.print(" \337C");
}

void setup(){
  Serial.begin(115200);

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
  client.setCallback(callback);
  client.subscribe("house/temperature");
  client.subscribe("house/humidity");
 
  lcd.begin(16,2);
  lcd.init();

  // Turn on the backlight.
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("HUMIDITY");
  lcd.setCursor(0, 1);      
  lcd.print("TEMPERATUR");
}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ESP8266Client2-";
    clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");
      // Once connected, publish an announcement...
      client.publish("outTopic", "hello world");
      // ... and resubscribe
      client.subscribe("house/temperature");
      client.subscribe("house/humidity");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void loop(){
    if (!client.connected()) {
      reconnect();
    }
    client.loop();
}

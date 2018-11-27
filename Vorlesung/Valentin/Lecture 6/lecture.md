# Sensors
Group 2

####Smoke Sensor MQ-2

* Useful for gas leakage detection (home and industry)
* H2, LPG, CH4, alcohol, smoke and propane can be detected
* high sensitivity, which can be adjusted by using the potentiometer
* fast response time
* wide detecting scope
* stable and long lifetime

###### Connection
* Red to Voltage (5V)
* Black to Ground
* Yellow to e.g. A0
* White not connected

###### Basic example

    void setup() {
        Serial.begin(9600);
    }

    void loop() {
        float sensor_volt;
        float sensorValue;

        sensorValue = analogRead(A0);
        sensor_volt = sensorValue/1024*5.0;

        Serial.print("sensor_volt = ");
        Serial.print(sensor_volt);
        Serial.println("V");
        delay(1000);
    }


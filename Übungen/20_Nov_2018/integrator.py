#!/usr/bin/env python
import paho.mqtt.client as mqtt

def on_connect(client, userdata, flags, rc):
    print("Connected with result code " + str(rc))

    client.subscribe("temperaturesensor")

def on_message(client, userdata, msg):
    print(msg.payload.decode())
    if int(msg.payload.decode()) > 10:
        switchOn()

def switchOn():
    client.publish("ac", 1)

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message

client.connect("192.168.12.1", 1883, 60)

client.loop_forever()

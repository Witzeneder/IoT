#!/usr/bin/env python
import paho.mqtt.client as mqtt

def on_connect(client, userdata, flags, rc):
    print("Connected with result code " + str(rc))

    client.subscribe("ac")
    print("switch off")

def on_message(client, userdata, msg):
    print(msg.payload.decode())
    if msg.payload.decode() == "1":
        print("switch on")

    else:
        print("switch off")


client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message

client.connect("192.168.12.1", 1883, 60)

client.loop_forever()

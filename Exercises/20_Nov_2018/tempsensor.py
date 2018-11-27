#!/usr/bin/env python
import time
import random

import paho.mqtt.client as mqtt

def on_connect(client, userdata, flags, rc):
    print("Connected with result code " + str(rc))

client = mqtt.Client()
client.on_connect = on_connect

client.connect("192.168.12.1", 1883, 60)

client.loop_start()

temp = -15

while True:
    time.sleep(2)
    delta = random.randint(0,2)
    temp += delta
    client.publish("temperaturesensor", temp)

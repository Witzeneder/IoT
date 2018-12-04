# 04 December 2018

## LoRa
Low Power Wide Area Network = LPWAN
LoRa is a new transmission standard between distributed devices and distributed gateways

###### What is relation bandwidth/range/power?
High power -> long range
We want long range but low power costs
* decrease bandwidth to increase range without touching power.
* but less bandwidth = less data can be transformed

LoRa uses low bandwidth and low power but wide range (bc of the low bandwidth)

###### What is the link budget?

connection between the sender and receiver - transmittion power of sender and sensitivity of the receiver - is deducted by all sorts of obstacles between them (range, walls, trees,...)

* The link budget is an accounting of all of the gains and losses from the transmitter, through the medium (free space, cable, waveguide, fiber, etc.) to the receiver
* LoRa has a link budget of 154 dB which is much higher then mobile LTE (130 dB)
* A simple link budget equation looks like this:
  * Received Power (dB) = Transmitted Power (dB) + Gains (dB) − Losses (dB)
* The "thicker" the obstacle, the more it costs to the link budget
* 868 MHz frequency in Europa (different in America/Asia/..)

###### What is the community approach?

* e.g. TTN (The Things Network) - only a few gateways, have to be opened by users themselves.
* based on privately built and operated gateways

###### What are benefits with LORA?
* wide range
* ideal for low power sensors distributed everywhere, also far from the next gateway
* controlling Things

###### What are problems with LORA?
* detect a lot of changes
* as it uses one channel - like walkie talkies only 1 can send data at once

###### LoRa in Austria - Linz
* Linz AG wants to use LoRaWAN to establish a SMART CITY
* TTN has currently 5 Members in Linz + 5 gateways
* In austria there are 8 communities (Graz, Klagenfurt, Linz, Niederösterreich, Salzburg, Vienna, Villach, Vorarlberg and Wels)

###### Lora gateway/client adapter
* Gateway ~60€
* LoRa client ~8€

## TTN

###### What is TTN (in connection with LoRa)
The Things Network is about enabling low power Devices to use long range Gateways to connect to an open-source, decentralized Network to exchange data with Applications.

###### What does it stand for?
The Things Network

###### Which problems does it solve?
platform to build LoRaWAN easily
###### How does it solve them?
Quickly cover up wide areas - every installed device extends the Network

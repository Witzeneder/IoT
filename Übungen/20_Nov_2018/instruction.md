# Lab 3

## COAP
Install Coap library and use the esp32 example, with ESP8266Wifi.h to trigger a led.
You just have to change the import to ESP8266Wifi.h instead of Wifi.h, and change UID and Password for the Wifi.
The link to the code is [Link](https://github.com/Witzeneder/IoT/blob/master/%C3%9Cbungen/20_Nov_2018/esp32WithWifi.ino)

Then install the Copper 4CR extension to Chrome - there is a great example on the github instruction [Copper 4CR](https://github.com/mkovatsc/Copper4Cr).

Open the Copper extension and enter the correct ip of the arduino and "/light" after the ip. On the tap outgoing you can write 0 for ledon and 1 for ledoff. With PUT you write the command over Coap to the arduino.

#### Problems:
* Chrome extension installation - first read then work, not the other way!
* when connecting with Copper 4CR dont forgot the /light in the link and was wondering why it didnt work. There are no error messages.


## MQTT

* Install the mqtt.fx on the laptop and start it
* Go to settings and change the Broker Address to the raspberry pi Address [ours was 192.168.12.1] and press apply
* Click on 'Connect' and subscribe to the 'home/garden/fountain' channel
* Now you can write under the 'Publish' section

### MQTT Simulators

With python we created files for a temperatursensor, an acSwitch and an integrator which controls the system.

The tempsensor [Quellcode](https://github.com/Witzeneder/IoT/blob/master/%C3%9Cbungen/20_Nov_2018/tempsensor.py) produces values from -15 upwards and publishes it to the mqtt channel "temperaturesensor".

The integrator [Quellcode](https://github.com/Witzeneder/IoT/blob/master/%C3%9Cbungen/20_Nov_2018/integrator.py) listens on the mqtt channel "temperaturesensor". If the value on this channel exceeds "10" the integrator sends the command "1" to the mqtt channel "ac", which means the ac-switch should turn on!

The AC-Switch [Quellcode](https://github.com/Witzeneder/IoT/blob/master/%C3%9Cbungen/20_Nov_2018/acswitch.py) listens on the mqtt channel "ac". If the value is "1", he turns the switch to the mode "on".

##### Problems:
* you need to add ".decode()" at the msg.payload you get from the mqtt connection to get the real value not the bytestream.
* you need to install pip to install python scripts like mqtt


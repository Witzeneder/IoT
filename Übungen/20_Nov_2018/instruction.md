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

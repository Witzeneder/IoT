# 16 November 2018

## Webhook
Create Button Device, which triggers via HTTP Post to IFTTT WebHook → then triggers report to phone
* Create account on iftt.com
* Create a new applet
  * Choose service as Webhook
  * Choose trigger 'Recieve a web request' and complete it by specifying the Event name
  * Choose what should happen if triggered -> e.g. send email

* Go to just created applet and click on Webhooks
* Now select Documentation to get the POST Request you need
* Used HTTP over TLS (HTTPS) example sketch to write application
* Combined it with the WiFi application from the previous exercise
* Profit

###### Problems
* Board wasn't properly working, wouldn't flash correctly -> Solved by professor
* HTTPS wasn't working so used HTTP request instead

[Webhook Link](https://github.com/Witzeneder/IoT/blob/master/Übungen/16_Nov_2018/trigger/trigger.ino)

## I2C 2 lines display
Figure out how to use I2C 2 lines display

* Open Arduino file and install LuquidCrystal library
* Open up the library and try out the example projects
* Change code and try own code

[Display Link](https://github.com/Witzeneder/IoT/blob/master/Übungen/16_Nov_2018/I2C/I2C.ino)

###### Problems
* Problems with connecting the I2C board properly - got a useful advice from another group [Julia Hauptmann and Nikolaus Hofer]

## Temperature Sensor DS18B20 remote data
The task was to show the temperature of a DS18B20 sensor on a webserver.
There is a great tutorial on this page [Tutorial](https://randomnerdtutorials.com/esp8266-ds18b20-temperature-sensor-web-server-with-arduino-ide/)

[Link to our used arduino file](https://github.com/Witzeneder/IoT/blob/master/%C3%9Cbungen/16_Nov_2018/temperaturesensor/temperatursensor.ino)
###### Problems
* you need to download the OneWire and DallasTemperature Libraries and install them.

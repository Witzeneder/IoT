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


## I2C 2 lines display
Figure out how to use I2C 2 lines display

* Open Arduino file and install LuquidCrystal library
* Open up the library and try out the example projects
* Change code and try owne code 

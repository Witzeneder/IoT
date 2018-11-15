# 15 November 2018
First exercise - Jakob Spirk and Valentin Witzeneder


## Raspberry Pi Setup
* Downloaded Etcher

* Use Etcher to deploy the given image to the micro SD of the Raspberry Pi

* Open config.txt from the image data

  * setup uiot_ap_name to "iotempire-jakobvali"
  * setup uiot_ap_password to "internetofthings"
  * setup uipt_wifi_user to "wifi-user"


* Connect to the wifi "iotempire-jakobvali" with specified password "internetofthings"


## Setup Arduino Board

* Test Arduino with blinking application

  * Download the Arduino API

  * Open Arduino IDE and use the “Blink” application which is predefined [File -> Examples -> Basic -> Blink]

  * Connect Arduino to laptop

  * Install Arduino ESP8266

  * Select Board -> ESP8266[LOLIN(WEMOS) D1 R2 & mini]

  * Upload the file to the Arduino Board

  * ###### Problems
    * How to deploy Code to Arduino -> solve with adding board [ESP8266] to Additional Board Manager.
    * Showed following errors: [espcom_sync espcom_open espcom_upload_mem] failed -> use different Arduino Board, because after investigation we found out we took the board from the 'not-working boards' pile


* Connect Arduino Board to the Raspberry Pi WiFi

  * Open Arduino IDE and write application which searches for and connects to specified WiFi (the one we created with the Raspberry Pi)

  * Application is able to trigger the blinking of the Arduino Board remotely

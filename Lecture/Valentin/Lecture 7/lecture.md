# Lecturenotes

### ULNOIOT Examples/Questions
###### Which topic needs to be called to switch on the coffee machine?
* kitchen/coffee-machine/switch/set on

###### Which topic needs to be called to set all lights in the living room to be blue?
* living_room/leds1/rgb/set blue
* living_room/leds2/rgb/set blue

###### Which topic needs to be called to turn off the main power?
* main/switch/set off

###### What is the general rule for forming topics in UlnoIoT?
* Based on the folder structure
* maintopic/nodetopic/devicename

###### When does it make sense to change something in system.conf?
* If you don't use a raspberry pi and use different router + pc

###### What needs to/can go into node.conf?
* In the node.conf you can configure the MQTT server/user/password for a node and the board type

###### How do config.txt, etc/ulnoiot.conf, system.conf, and node.conf influence environment variables for compiling?
* Config.txt: uiot_ap_name, uiot_ap_password, uiot_wifi_name, uiot_wifi_password and uiot_wifi_user can be changed
* System.conf: Set AP password and the MQTT host

Order is etc/ulnoiot.conf, config.txt, system.conf, node.conf -> every conf is able to change all variables

###### Preferred features percentage
65%

###### What are the steps ulnoIoT executes when you call deploy in a node-folder?
* Reads the configuration from the node directory
* Prepares compile cache - links all the source code together (gets source code from lib/nodetypes fitting for the device which is used) and creates the wifi/general configuration.

###### Why can only one deploy run at once?
* Because it uses the same compile cache - you would overwrite it while executing two deploys.

###### What benefit is this restriction?
* Only one compile cache because of deploy speed/space  

## How to write a driver?

###### Analyze and understand the analog driver (header and cpp), note down remarkable features

###### Analyze and understand I2C_Device - What functionality does it add?

###### Analyze the new VL53L0X driver
* How could you implement a driver for the BMP180/TSL2561/MPR121 based on this?
* Write a small strategy


### PlatformIO
PlatformIO is an open source ecosystem for IoT development.
###### Definition
PlatformIO is a extension to develop software for IoT.
###### Points
* 29 platforms
* 17 frameworks
* 566 boards
* over 5.500 libraries
* Command line tool
* Cross platform IDE and unified debugger
* portable to many different text IDEs

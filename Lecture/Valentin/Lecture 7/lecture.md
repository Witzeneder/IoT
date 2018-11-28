# Lecturenotes
ULNOIOT Examples
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

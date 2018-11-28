# Vorlesung 7, 28.11.2018
### Topic for coffee machine?
kitchen/coffee-machine/switch/set
### All the lights to blue in living room?
two topics:
living_room/leds1/rgb/set -> payload: blue
living_room/leds2/rgb/set -> payload: blue
### Turn main power off?
main/switch/set -> payload: off
### What is the general rule for forming topics in UlnoIoT?
folders and devicenames->in setup.cpp make the topics
### when does it make sense to change something in system.conf?
configure external linux. Dont have a raspi
### What needs to/can go into node.conf?
* Your configure the board you are using.
* Change mqtt host
* username and password

### How to config.txt, etc/ulnoiot.conf, system.conf and node.conf influence environment variables for compiling?
config.txt and ulnoiot.conf on boot set environment variables, then read system.conf, then read node.conf
all can contain same variables




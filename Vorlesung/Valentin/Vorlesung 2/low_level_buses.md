# 16. November 2018
## RS233

###### Explanation
Serial interface which was created in the 1960s, the first applications on connection of mainframes or text-terminals. Today not realy used because dependent on cable and can not delive much data. Is used for configuration purposes.

###### Information
* Which cable and how long hast to be defined - standard doesn't define max or min but define recommendations.
* Can reach up to 300 meters but with the size of the cable the throughput differs.
* Today cable often consists of RS233 to USB

###### Usages
* Today only configuration purposes like modems etc.

## I2C
###### Explanation
Designed 1982 and used when lower costs are more important than speed. Good feature is, that he is low active, you can use devices with different voltages.

###### Information
* 5 MBIT undirectional
* 3.4 MBIT bidirectional
* Wiring
  * One serial clock
  * One serial data line (pullup resistor)
  * Voltage supply
* Normal mode is master-slave but multi master is also possible
  * Master send start signal (read/write in flags)
  * Bytewise read or write operation
  * Everything has to be acknowledged (ACK)
  * Last byte is a NACK (Not-ACK)
  * Most significant bit first



###### Usages
* Real time clocks
* Low speed ADC / DAC
* NVRAM
* Change settings of the display via display data channel
* Change volumes of speaker

## SPI
Serial periphal interface for synchrone serial information. Used over short distances [max. 3 meters] in embedded systems primerly. Communicates in full duplex modes in master-slave mode.

###### Information
* Wiring
  * 4-wired serial bus
  * Intended for high speed comunication

###### interface
* Defines 4 logical singals
  * Serial clock
  * MOSI (Master output slave input)
  * MISO (Master input slave output)
  * SS (Slave select)

###### Usages
* Sensors
* Control devices
* Communication over short distances, e.g. data over micro controllers


## Onewire

###### Explanation
Device Communication bus system that provides low-speed data, signaling and power over a single conductor(Leiter). Similar to I2C but lower data rates and longer range.
It is usually used to communicate with small devices such as digital thermometers and weather instruments.
One detail which distincts Onewire to other bus systems is the possibility of using only two wires [data and ground].

###### Information
* Onewire devices have an 800 pF capacitor to store, charge and power the device during periods when the data line is active.
* Onewire Chips have a distinct ID.
* On a Onewire network, which Dallas has dubbed a "MicroLan" (trademark), a single "master" device communicates with one or more 1-Wire "slave" devices over a single data line, which can also be used to provide power to the slave devices.  
* 64 - bit homeadress - master can talk to everyone other slave over this address.

Onewire is able to provide a compibation of emory, mixed signal and secure authentication functions via a single contact serial interface. With both power and communication delievered over the serial protocol, Onewire devices have a outstanding performance in their ability to provide key functions to systems where interconnect must be minimized.

###### Usage
* Thermometers
* Battery monitoring
* Real time clock
* Weather instruments

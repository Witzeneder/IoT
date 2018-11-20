# How to speak IoT

XML | MODBUS

### XML
Extensive Markup Language

* Markup language much like HTML
* Designed to be self-descriptive
* Format that is readable to both human and machine
* Defines a set of rules for encoding documents
* XML was designed to carry data - with focus on what data is
* XML is extensible
  * Most application will work as expected even if new data is added
* XML simplifies things
  * data sharing
  * data transport
  * platform changes
  * data availability

###### Syntax examples
* XML documents must contain one root element
* All XML elements must have a closing Tag
* Tags are case sensitive
* All XML elements must be properly nested
* XML attribute values must always be quoted

###### Pros
* Easy readable
* Covers edge cases (which e.g. YAML/JSON don't)
* XML can easily and powerfully be transformed into another format
* XML is self-describing to some degree, i.e. it directly contains information about its structure and meaning (in contrast to most binary formats)

###### Cons
* Lots of overhead
* It is not as fast to parse (as e.g. binary)

### MODBUS
Modbus is an open serial communication protocol that has become a standard communications protocol in industry, and is now the most commonly available means of connecting industrial electronic devices. It is used widely by many manufacturers throughout many industries. Versions of the Modbus protocol exist for serial lines (Modbus RTU and Modbus ASCII) and for Ethernet (Modbus TCP). 

* Modbus is transmitted over serial lines between devices
  * e.g. single serial cable connecting the serial ports on two devices (master - slave)
* Data is sent as series of ones and zeroes called bits, each of them is sent as a voltage
  * Zeroes - positive
  * Ones - negative
* Information is stored in the slave device in four different tables

###### Pros
* Bits are sent very quickly (typical are 9600 baud[bits per second])
* Failsafe

###### Cons
* Not use Modbus if you need fast data response
* Not use Modbus when want to go through a firewall
* Not use Modbus if you anticipate having a large number of nodes

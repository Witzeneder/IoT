# Vorlesung 3, 20.11.2018  
## How to speak IoT?
Research on Protocols speed, readability, user friendliness, pro, contra
### YAML:
* YAML ist eine markuplanguage zur datenserialisierung, angelehnt an XML, Datenstukturen in Pearl, Python, C und RFC 2822.  Ziel ist jede Datenstruktur in eine assoziative Liste (Array, Skalare) darzustellen.
* Pro: einfach zu lesen und schreiben, lightweight, valid json
* Con: very slow, support is higher for JSON
### JSON:
* Kompaktes Datenformat in einfach lesbaren Textformat. Insbesondere bei Webanwendungen verwendet. Daten werden verschachtelt. Es gibt Datentypen
* Pro: jedes gültige json ist ein gültiges JavaScript, sehr einfach zu lesen und schreiben
* Con: no error handling, can be dangerous to use with untrusted services.
Other partners make:
Harald Pinsker: binary (CBOR), Text
Valentin Witzeneder: XML, MODbus
Niklas Hofer: Zigbee, RFID

## Who does IoT?
Title
Members
Purpose / challenges
Cost / access

### Apache Foundation: 
* Title: Apache Software Foundation
* Members: You cant find notable Members but here is a link to all members https://www.apache.org/foundation/members.html
* Purpose / challenges: they support open source projects like Accumulo or Zookeeper, Apache Flume
* Cost access: You have to be nominated by an existing member
### W3C: 
* Title: World Wide Web Consortium
* Members: Airbnb, Amazon, Google, nearly every IT company
* Purpose / challenges: they develop open standards to ensure long time growth of the web
* Cost /access: fees vary by organization size, type, and location. In Austria between 2.000 and 70.000€ depends on your organization.

## Publish Subscribe
Producer-consumer, like channel subscription

## CoAP
* Developed by IETF
* Constrained Application Protocol
* Specialized web transfer protocol for use with constrained nodes and constrained networks in the Internet of things.
* Designed for machine-to-machine applications
* Examples: Smart energy, building automation, all home automation devices from IKEA
* Very similar to HTTP post with a REST model
* HTTP is TCP based, while CoAP is UDP based - UDP requires that you send UDP pings every few seconds to keep the NAT/Firewall connection open, while in TCP typically it is only required every 15 min or so. So if you need to keep the connection open (e.g. for push technologies), then CoAP is less efficient than HTTP (and HTTP/2).
* In IoT: used for sensors, because it implements a lightweight application layer which is also useful for small messages
* Designed for low-memory and low-power devices
* The IoT realm is widely using CoAP as a protocol



# Vorlesung 9, 04.12.2018
## LORA
### What is the relation bandwidth/range/power?
* Long range and low bandwidth
### What is the link budget?
* budged over time -> sender sends signal and gets weaker by distance. what is required to get to the receiver is the budged.
* 154dB has LORA
* 868 MHz for Europe

### What is the community approach?
* only few gateways -> they have to be deployed by the communits
### What are benefits with LORA?
* low power required
* high range
* high link budgef
### What are problems with LORA?
* small throughput

### After movie
* A link budget is an accounting of all of the gains and losses from the transmitter, 
through the medium (free space, cable, waveguide, fiber, etc.) to the receiver in a telecommunication system.
* Earth to moon 250 - 310 db, more than 100W, high gain antennas
* Wifi calc: http://en.jirous.com/calculation-wifi/
* Lora calc: http://www.rfwireless-world.com/calculators/LoRa-Sensitivity-Calculator.html
* 5 members in linz
* Lora client -> 5€
* Lora gateway -> 60€
* software: radiohead
* Lora is good for controling things
* adv: low power, high range dis: small throughput, community too small, expensive
* How does it fit into IoT? for communication

## TTN
### What is TTN? 
for building a global LoraWAN
### What does it stand for? 
The things network - building a gateway network all over the world
### Which problems does it solve? 
* building a decentralized network all over the world
* platform to build lorawan easily
### How does it solve them?
every installed device extends the network


### What new feature do you learn about ragarding the esp8266?
* sleep mode
### How do you see Lora could be used in UlnoIoT? What would need to be adjusted?

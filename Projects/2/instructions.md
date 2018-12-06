# Project 2 - Protocol

### Scale
`hx711(scale, D1, D2, 450, false);`

* Oil -> 109g
* Water -> 238g
* dirty Water -> 351g

Scale is of good use when measuring the amount of used fluid, each fluid has its own weight factor which is needed to be able to calculate the volumne.


### Raindrop
`analog(hum).with_precision(10);`

* Oil -> 1022 9/10 inside
* Water -> 274 9/10 inside
* dirty Water -> 272 9/10 inside

* This shows that the raindrop sensor is of very good use, when detecting any kind of water. 
* On the other hand oil isn't detected since the sensor doesnt register it as "wet".

### Ultrasonic
`hcsr04(ulti, D1, D2).with_precision(10);`

* Oil -> values between 34mm
* Water -> 32mm
* dirty Water -> 35mm

* The ultrasonic sensor is able to give the correct value, it doesn't matter which fluid is used. 
* To get a valid value we took a lineal and put it on the cup to have a aid for measuring from the same distance.


### Time of flight
`Distance_Vl53l0x(tof, <optional long range bool>, optional highaccuracy bool>);`

* Oil -> 140mm
* Water -> 130mm - 160mm
* dirty Water -> 140mm

* The time of flight sensor is of good use with oil and dirty water (varies with +/-10mm), 
* but when used clear water it varies +-30mm.
* To get a valid value we took a lineal and put it on the cup to have a aid for measuring from the same distance.

### Summary

The scale worked quite good for any kind of liquids. The only disadvantage is that it is quite huge comparing to the other sensors.

The Raindrop Sensor is also a good solution for Water. It works like a float. The problem is, that the raindrop sensor cannot conduct electricity in oil.

The Ultrasonic sensor works quite exactly. The only struggle is when using a small container, then the sensor might fail, if the liquid is too near.

The Time of flight sensor was one of the best sensors, and worked on every liquid very exactly. Only with water the values varied a little bit.

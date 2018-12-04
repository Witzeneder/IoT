# Project 2 - Protocol

### Scale
hx711(scale, D1, D2, 450, false);

* Oil -> 109g
* Water -> 238g
* dirty Water -> 351g

### Raindrop
analog(hum).with_precision(10);

* Oil -> 1022 9/10 inside
* Water -> 274 9/10 inside
* dirty Water -> 272 9/10 inside

### Ultrasonic
hcsr04(ulti, D1, D2).with_precision(10);

* Oil -> values between 34mm
* Water -> 32mm
* dirty Water -> 35mm

### Time of flight
Distance_Vl53l0x(tof, <optional long range bool>, optional highaccuracy bool>);
                    
* Oil -> 140mm
* Water -> 130mm - 160mm
* dirty Water -> 140mm


### Summary

The scale worked quite good for any kind of liquids. The only disadvantage is that it is quite huge comparing to the other sensors.

The Raindrop Sensor is also a good solution for Water. It works like a float. The problem is, that the raindrop sensor cannot conduct electricity in oil.

The Ultrasonic sensor works quite exactly. The only struggle is when using a small container, then the sensor might fail, if the liquid is too near.

The Time of flight sensor was one of the best sensors, and worked on every liquid very exactly. Only with water the values varied a little bit.

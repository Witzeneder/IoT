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

* Oil -> values between 14mm - 34mm (maybe the cup is causing this)
* Water -> 14mm
* dirty Water -> 16mm

### Time of flight

* Oil -> 140mm
* Water -> 130mm - 160mm
* dirty Water -> 140mm

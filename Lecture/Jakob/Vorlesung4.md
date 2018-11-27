# Vorlesung 4, 21.11.2018
## Scaling and Testing:
### What will be issues scaling (system size, number of systems, management) ?

* Finding faulty devices
  * Heartbeat
  * Central monitor
* Testing: Simulators in specific
* Configuration management -> what do you want to manage, how do you keep specific configurations
* Just scale up scenarios and find problems there
* Can you update them all at once?
* Simulators allow the simulation of a multitude of devices
* Consistency in communication between devices
* Security threat

### How can we do testing?

* Device testing before use
* Simulators with Test cases

### What role will play
* Simulator(-component)s?
  * Check how the system reacts to multiple devices
* MQTT
  * Validating of the communication
* Stories
  * Helps to construct IoT systems
  * Define use case and application purpose so the implementation is flawless
  
## How can we develop and manage software faster for IoT?

### OpenHAB
* Title: Open home automation bus
* Availability: open source
* Documentation: huge documentation, tutorials. There are many videos on youtube
* Devices/OS supported: OpenHAB only needs a JVM, so it can run on many devices(Windows, Linux, Mac, Raspberry, Pine, Docker,..). 
OpenHAB is a pluggable technology, so it supports more than 200 tecnologies and thousand of devices. 
You can create your own technology to get your device running with OpenHAB.
* Mass deployment: 
* Security/privacy: uses encrypted communication, authentication and access control, secure remote access 

### ThingSpeak
* Title: ThingSpeak
* Availability: one version for free, another one for commercial uses cost 650$/Unit
* Documentation: huge documentation with tutorials.
* Devices/OS supported: All devices which support rest or mqtt
* Mass deployment: mqtt
* Security/privacy: uses api keys

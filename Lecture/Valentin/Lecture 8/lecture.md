# 29 November 2018

20-50 Billion connected devices in 2020

### Internet of broken things - Questions

* How could anything go wrong?
  * Security leaks
  * To many different interfaces


* What did already break?
  * Temperature sensors had failure so the heat wouldn't go up when needed


* What will break?
  * Security
  * IP adresses(?)
  * Privacy

* Why?
  * Companies assume they can do updates for a ton of devices and everything is fixed
  * Only need one bad device which is hacked and your whole network is infiltrated
  * People don't change password
  * A lot of trouble in the idea of using start topology (e.g. if cloud goes down everything is going down)

###### Example Break Downs
* Default passwords in devices and routers
    * Zombie webcams and routers
* WiFi networks very insecure - last widely deployed standard WPA
* Deauth attack
  * Countless denial of service attacks possible
* Krack attack
  * Most WiFi networks are insecure and you can bring them to read everything which is send (cleartext) - WPA not secure
* Cyber abuse
  * Usually domestic, abuser spies and knows too much
* Man in the middle attack
  * Usually prevented by using certificates etc. from third parties which are trusted to both communication partners
  * People don't do that in IoT (e.g. certificate validation needs to much resources)

### Internet of broken things - Fixable?
* 5 action points that when addressed will fix the IoBT
* 2 arguments for continuing to use and build the Internet of Things
* Prove hypotheses wrong: "We should abandon all work with the Internet of Things and only focus on classics (mobile devices and industrial building automation)"

###### Fix the IoBT
* More cooperation amongst stakeholders including information sharing within defined boundaries, along with graduated sanctions being in place for rule breakers
* Standards for IoT devices
* Policymakers should push flexible, guidance-driven frameworks, not prescriptive regulation
* More attention should be paid to the intersection of IoT and the need to secure supply chains
* IoT providers should be encouraged to undertake good governance best practices
* Government should be willing to allow industry to react to data breaches without overly broad, harsh or punitive fines, except in egregious circumstances
* Creating an open security framework built on interoperable standards
* More over the air patches
* Ban standard passwords/id/..

###### Fix the IoBT - Discussion / common points
* Open security
* Standards
* Regulations
* Over-the-air update mechanism.
* More information sharing
* Consumer should adapt best security practises

###### Continuing using and build IoT
* Cost saving - communicate used in an effective manner thereby conserving and saving cost and energy
* Information - with more information, you can make better decisions (hopefully)
* Automation and Control - machines are capable to communicate with each other without human intervention which leads to prompt output; better analysis because of the data amount

###### Textbook advice
* Emphasize security from day one
* Lifecycle, future-proofing, updates
* Access control and device authentication
* Know your enemy
* Prepare for security breaches

###### Counter Measures
* Awareness
* Layered architectures
* Avoid wireless
* Active and aware community
  * supporting
  * auditing software/hardware
* Openness about core infrastructure
  * easy to audit/update
* Build security into
  * life cycle management
  * maintenance
* Better symmetric encryption than insecure unvalidated asymmetric

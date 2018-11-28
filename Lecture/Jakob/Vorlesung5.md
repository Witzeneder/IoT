# Vorlesung 5, 22.11.2018

## Guest Dr. Ruben Jubeh
Question:
* is this conecpt used by companies aswell?

## How can we toggle in Node-RED?
Use a function and store the state.
```javascript
  if(msg.payload === "released"){
    if(context.state === "on") {
      context.state = "off";
    } else {
      context.state = "on";
    }
      msg.payload = context.state;
  }
  return msg;
```
## Node-RED only forward changes?
rbe function - Report by Exception node, only passes data if the payload has changed.

## GUI
Done with dashboard nodes.
You need to create a new tab in Layout tab. There a new group and give it a nice name.
Move switch from Admin to test group

## What features would you like to see in an IoT Framework?
* very good documentation including videotutorials
* UI platform to build the system
* open source

## Features of UlnoIoT
* for free, opensource
* GUI
* integrated devices
* testing

Featurs form UlnoIoT i am missing:
* documentation is not that good?
* the system has got many bugs

ulnoIoT has 2 features i would like to see in an IoT Framework. -> 66,6% 

# Public Node-RED Exploration

###### How to toggle in Node-RED
With the help of a function (Edit function node) and store state.

if(msg.playload == "released") {
  if(context.state === "on"){
    context.state = "off";
  } else {
    context.state = "on";
  }
msg.playload = context.state;
}
return msg;

With the help of rbe node it is only triggered when state changed.

###### GUI 
Done with dashboard nodes.

###### Questions to lecture
What kind of technology did the electirc engineers prefer?

## What features would you like to see in an IoT Framework?
* good documentation 
* turotials
* open source
* testable
* GUI

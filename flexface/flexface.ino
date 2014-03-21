//////////SOUNDDDDDDD


#include <Wtv020sd16p.h>

int buttonPin = 9;

int resetPin = 2;  // The pin number of the reset pin.
int clockPin = 3;  // The pin number of the clock pin.
int dataPin = 4;  // The pin number of the data pin.
int busyPin = 5;  // The pin number of the busy pin.

Wtv020sd16p wtv020sd16p(resetPin,clockPin,dataPin,busyPin);

void setup() {
  //Initializes the module.
  wtv020sd16p.reset();
  pinMode(buttonPin, INPUT);
  pinMode(busyPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() 
{ 
//  wtv020sd16p.asyncPlayVoice(0);
  int buttonState;
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == 0) {
      Serial.println("on");
      wtv020sd16p.playVoice(0);
//      wtv020sd16p.playVoice(0);
//    digitalWrite(busyPin, HIGH);
  } else {
//    wtv020sd16p.stopVoice();
  }

  // Now we'll command the servo to move to that position:
  // Because every flex sensor has a slightly different resistance,
  // the 600-900 range may not exactly cover the flex sensor's
  // output. To help tune our program, we'll use the serial port to
  // print out our values to the serial monitor window:
  
//  if (flexposition < flexmax && flexposition > flexmin){
  
//   if (true) {
//      wtv020sd16p.asyncPlayVoice(0);
//   }

  // Note that all of the above lines are "print" except for the
  // last line which is "println". This puts everything on the
  // same line, then sends a final carriage return to move to
  // the next line.

  // After you upload the sketch, turn on the serial monitor
  // (the magnifying-glass icon to the right of the icon bar).
  // You'll be able to see the sensor values. Bend the flex sensor
  // and note its minimum and maximum values. If you replace the
  // 600 and 900 in the map() function above, you'll exactly match
  // the flex sensor's range with the servo's range.

  //delay(20);  // wait 20ms between servo updates
} 



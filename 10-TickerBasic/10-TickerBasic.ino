/*
  Basic Ticker usage
  
  Ticker is an object that will call a given function with a certain period.
  Each Ticker calls one function. You can have as many Tickers as you like,
  memory being the only limitation.
  
  A function may be attached to a ticker and detached from the ticker.
  There are two variants of the attach function: attach and attach_ms.
  The first one takes period in seconds, the second one in milliseconds.
  
  The built-in LED will be blinking.
*/

#include <Ticker.h>

Ticker flipper;

int count = 0;

void flip()
{
  int state = digitalRead(2);  
  digitalWrite(2, !state);    
  delay(500);
}

void setup() {
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  Serial.begin(115200);
  
  // flip the pin every 0.3s
  flipper.attach(0.3, flip);
}

void loop() {
}

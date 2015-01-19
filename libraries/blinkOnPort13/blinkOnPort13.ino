/**
 *  This program makes an LED blink at fifth-of-a-second intervals.
 *
 *  Although I typed it by hand and varied on what's online,
 *  this sample clearly isn't original.
 */

const int  LED = 13; 

void setup() 
{
  pinMode(LED, OUTPUT); 
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(200);
  digitalWrite(LED, LOW);
  delay(200);
}

void setup()
{
  //The 8-pin ATTinys (25/45/85) all have 5 usable digital output pins 0-4
  pinMode(4, OUTPUT);
}
void loop()
{
  digitalWrite(4, HIGH);    //Set the LED pins to HIGH. This gives power to the LED and turns it on
  delay(100);   // Wait for a half a second

  digitalWrite(4, LOW);   // Set the LED pins to LOW. This turns it off
  delay(100);    //  Wait for a half second
}

int Relay = 7;
void setup()
{
  pinMode(Relay, OUTPUT);     //Set Pin3 as output
}
void loop()
{
  digitalWrite(Relay, HIGH);   //Turn off relay
  delay(5000);
  digitalWrite(Relay, LOW);    //Turn on relay
  delay(5000);
}

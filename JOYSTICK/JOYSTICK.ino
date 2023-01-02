int JoyStick_X = A0; //x
int JoyStick_Y = A1; //y
int JoyStick_SW = 2; //key
void setup()
{
  //pinMode(JoyStick_SW, INPUT);
  pinMode(JoyStick_SW, INPUT_PULLUP);
  Serial.begin(9600); // 9600 bps
}
void loop()
{
  int x, y, sw;
  y = analogRead(JoyStick_X);
  x = analogRead(JoyStick_Y);
  sw = digitalRead(JoyStick_SW);
  Serial.print("X : ");
  Serial.println(x);
  Serial.print("Y : ");
  Serial.println(y);
  Serial.print("SWITCH : ");
  Serial.println(sw);
  delay(100);
}

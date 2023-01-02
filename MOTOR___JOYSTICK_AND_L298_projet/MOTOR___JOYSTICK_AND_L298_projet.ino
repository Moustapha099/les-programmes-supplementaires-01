#include<Servo.h>
Servo monServo ;

const int in2 = 9;
const int in1 = 10;

int JoyStick_X = A0; //x
int JoyStick_Y = A1; //y
int JoyStick_SW = 2; //key
void setup()
{
  //pinMode(JoyStick_SW, INPUT);
  pinMode(JoyStick_SW, INPUT_PULLUP);
   pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  Serial.begin(9600); // 9600 bauds
      monServo.attach(11); 


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
    

  if (y<=5)
  {
 digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    }
  if (y>=900)
  {
     digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    monServo.write(90);
delay(20);
    }


if (x<=5)
{ 
  monServo.write(90);
  delay(10);
  }

    if(x >= 900)
    {
      monServo.write(0);      
delay(1000);
monServo.write(45);
delay(2000);
monServo.write(90);
delay(2000);
monServo.write(120);
delay(2000);
monServo.write(180);
delay(2000);
monServo.write(120);
delay(2000);
monServo.write(90);
delay(2000);
monServo.write(45);
delay(2000);
monServo.write(0);      
delay(1000);
 
       }



}

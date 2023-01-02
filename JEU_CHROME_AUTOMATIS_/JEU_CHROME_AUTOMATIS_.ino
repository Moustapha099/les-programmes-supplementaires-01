#include<Servo.h>
int photo = A0 ;
Servo myservo ;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(photo, INPUT);
myservo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
int lecture = analogRead(photo);
Serial.println(lecture);
delay(80);
if(lecture > 800)
{
  myservo.write(40);
  delay(100);
  myservo.write(180);
  delay(500);
  
  }


}



const int trigPin = 9 ;
const int echoPin = 8 ;
long duration;
int distance ;
int lampe =11; 
int buzzer =7 ; 
void setup() {
  
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(lampe, OUTPUT);
}

void loop() {
  
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance = duration*0.034/2;

if(distance <=20)
{
  digitalWrite(lampe, 1);
  digitalWrite(buzzer, 1);
  }


else if (distance >20 )
{
  digitalWrite(lampe, 0);
  digitalWrite(buzzer, 0);
  }

}

#include<IRremote.h>
IRrecv IR(11);
int Relay = 7;
int buzzer = 8;
int ledPin = 2;

void setup() {
  // put your setup code here, to run once:

  pinMode(Relay, OUTPUT); 
  pinMode(buzzer, OUTPUT);
IR.enableIRIn();
pinMode(ledPin, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if(IR.decode()){
    digitalWrite(Relay, HIGH);
  Serial.println(IR.decodedIRData.decodedRawData, HEX );
if(IR.decodedIRData.decodedRawData == 0xEA15FF00){
digitalWrite(ledPin, HIGH);  
  digitalWrite(buzzer, HIGH); 

}
else if(IR.decodedIRData.decodedRawData == 0xB847FF00){
   digitalWrite(Relay, LOW);
digitalWrite(ledPin, LOW); 
 digitalWrite(buzzer, LOW);
}
delay(10);
IR.resume();
}
}

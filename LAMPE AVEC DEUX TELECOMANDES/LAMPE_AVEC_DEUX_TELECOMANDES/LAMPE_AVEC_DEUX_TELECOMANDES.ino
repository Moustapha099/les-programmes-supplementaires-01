#include<IRremote.h>
IRrecv IR(3);
int buzzer = 13;
int ledPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
IR.enableIRIn();
pinMode(ledPin, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run  repeatedly:
if(IR.decode()){
  Serial.println(IR.decodedIRData.decodedRawData, HEX );
if((IR.decodedIRData.decodedRawData == 0xC9418F01) ||(IR.decodedIRData.decodedRawData == 0xF30CFF00)){
digitalWrite(ledPin, HIGH);  
  digitalWrite(buzzer, HIGH);
  delay(300);
  digitalWrite(buzzer, LOW);
}
else if((IR.decodedIRData.decodedRawData == 0xE916FF00 )||(IR.decodedIRData.decodedRawData == 0x47997125
)){
digitalWrite(ledPin, LOW); 
digitalWrite(buzzer, LOW); 
}
delay(10);
IR.resume();
}
}

int led = 7;
int PIR = 6;





void setup() {

  pinMode(led, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
  

}

void loop() {
  int PIRvalue = digitalRead(PIR);

  if (PIRvalue == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("Motion Detected");
    delay(1000);
  }

  else{
    digitalWrite(led, LOW);
    Serial.println("No Motion");
    delay(200);
  }

}

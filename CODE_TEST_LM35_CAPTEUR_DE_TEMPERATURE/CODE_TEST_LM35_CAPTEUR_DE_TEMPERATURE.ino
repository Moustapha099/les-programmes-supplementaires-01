int temp;
float grad;

void setup() {
  pinMode(A1, INPUT);
  Serial.begin(9600);  // ouvre le port série
}

void loop() {
  temp = analogRead(A1);
  grad = (temp/1023.0)*5.0*1000/10;
  Serial.println(grad);

  delay(1000); // attend une seconde
}

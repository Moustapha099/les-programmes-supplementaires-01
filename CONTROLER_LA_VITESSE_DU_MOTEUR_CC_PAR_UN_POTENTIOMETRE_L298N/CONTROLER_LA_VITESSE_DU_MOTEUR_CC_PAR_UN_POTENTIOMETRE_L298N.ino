// Sen MECATRONIQUE

//CODE 1 
void setup (){
// LE SIGNAL DU POTREMTIOMETRE EST EN A0
Serial.begin(9600);
}

void loop() {
int valeur = analogRead(A0);    // declarer et lire la valeur de la pin
valeur = valeur* 0,2492668622 ;  // calibrer le rang de  0-1023 á 0-255
                                 // le nombre est obtenu en faisant 255/1023
Serial.println(valeur) ;
  
}



//CODE 2

/*


int in1 = 8 ;  // pwm pin
int in2 = 9;           
int ConA = 10 ;
int speed1 ; 

void setup() {
  // put your setup code here, to run once:
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(ConA, OUTPUT);

}

void TurnMotorA(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  speed1 = analogRead(A0);
  speed1 = speed1*0,2492668622 ;
  analogWrite(ConA, speed1);
}

void loop() {
  // put your main code here, to run repeatedly:
TurnMotorA();
}

 
 */

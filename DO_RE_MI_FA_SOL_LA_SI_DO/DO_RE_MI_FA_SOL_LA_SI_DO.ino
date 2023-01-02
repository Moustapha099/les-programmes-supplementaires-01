const byte PIN_BUZZER = 7;

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);



      
     
}

void loop() {
  
 
//PIANO NOTE 4 COMME NOTE DE BASE

//Premiere Couplet  
  tone(PIN_BUZZER, 1567, 800);     // SOl
  delay(250); 
 tone(PIN_BUZZER, 1567, 800);     // SOl
  delay(350); 
  
  tone(PIN_BUZZER, 1661, 800);  // sol/la
  delay(350);
  tone(PIN_BUZZER, 1661, 800);  // sol/la
  delay(350);
  
    tone(PIN_BUZZER, 1760, 800);  // la
  delay(450);
  tone(PIN_BUZZER, 1760, 800);  // la
  delay(450);
  
  tone(PIN_BUZZER, 1567, 800);   // SOl
  delay(400);
 tone(PIN_BUZZER, 1567, 800);   // SOl
  delay(350);
  
  tone(PIN_BUZZER, 1046, 800);  // DO
  delay(450);
    tone(PIN_BUZZER, 1046, 800);  // DO
  delay(450);
  
   tone(PIN_BUZZER, 1975, 800);  // SI
  delay(200);
     tone(PIN_BUZZER, 1975, 800);  // SI
  delay(1500);
  
  //Deuxieme couplet
  
     tone(PIN_BUZZER, 1567, 800);     // SOl
  delay(250); 
     tone(PIN_BUZZER, 1567, 800);     // SOl
  delay(200);
  
  tone(PIN_BUZZER, 1661, 800);  // sol/la
  delay(300);
 tone(PIN_BUZZER, 1661, 800);  // sol/la
  delay(300);
  
    tone(PIN_BUZZER, 1760, 800);  // la
  delay(450);
tone(PIN_BUZZER, 1760, 800);  // la
  delay(450);
  
  tone(PIN_BUZZER, 1567, 800);   // SOl
  delay(350);
 tone(PIN_BUZZER, 1567, 800);   // SOl
  delay(350);
  
  tone(PIN_BUZZER, 1244, 800);  // DO
  delay(450);
tone(PIN_BUZZER, 1244, 800);  // DO
  delay(450);
  
   tone(PIN_BUZZER, 1046, 800);  // SI
  delay(200);
   tone(PIN_BUZZER, 1046, 800);  // SI
  delay(1500);

 //troisieme couplet

   tone(PIN_BUZZER, 1567, 800);     // SOl
  delay(150); 
   tone(PIN_BUZZER, 1567, 800);     // SOl
  delay(100); 
  
  tone(PIN_BUZZER, 1661, 800);  // sol/la
  delay(250);
tone(PIN_BUZZER, 1661, 800);  // sol/la
  delay(200);
  
   tone(PIN_BUZZER, 2200, 800);  // sol/la
  delay(350);
   tone(PIN_BUZZER, 2200, 800);  // sol/la
  delay(450);
  
 tone(PIN_BUZZER, 1318, 800);     // Mi
  delay(450); 
 tone(PIN_BUZZER, 1318, 800);     // Mi
  delay(300); 

   tone(PIN_BUZZER, 1100, 800);     // Mi
  delay(350); 
 tone(PIN_BUZZER, 1100, 800);     // Mi
  delay(300); 
  
       tone(PIN_BUZZER, 1650, 900);  // la
  delay(450); 
      tone(PIN_BUZZER, 1650, 900);  // la
  delay(1500); 
  
//Quatrieme couplet

  tone(PIN_BUZZER, 1396, 500);     // FA
  delay(250); 
     tone(PIN_BUZZER, 1396, 500);     // FA
  delay(250); 
    
     tone(PIN_BUZZER, 1318, 800);     // MI
  delay(350); 
       tone(PIN_BUZZER, 1318, 800);     // MI
  delay(350); 
  
   tone(PIN_BUZZER, 1046, 900);     // DO
  delay(350); 
    tone(PIN_BUZZER, 1046, 800);     // DO
  delay(350); 
  
     tone(PIN_BUZZER, 1244, 800);     // RÉ
  delay(350); 
     tone(PIN_BUZZER, 1244, 800);     // RÉ
  delay(400); 
  
     tone(PIN_BUZZER, 1046, 800);     // DO
  delay(350); 
    tone(PIN_BUZZER, 1046, 800);     // DO
  delay(1500); 


}

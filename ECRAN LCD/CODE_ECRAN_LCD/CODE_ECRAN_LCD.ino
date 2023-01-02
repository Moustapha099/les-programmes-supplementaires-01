
#include "LiquidCrystal.h" // on inclut la librairie

// initialise l'écran avec les bonnes broches

// ATTENTION, REMPLACER LES NOMBRES PAR VOS BRANCHEMENTS À VOUS !

LiquidCrystal lcd(11,10,5,4,3,2);

void setup() {
   
}
void loop() {

    lcd.begin(16, 2);
      lcd.blink();  
        lcd.noBlink();  
   lcd.print("Sen_Mecatronique");

delay(2000);
}

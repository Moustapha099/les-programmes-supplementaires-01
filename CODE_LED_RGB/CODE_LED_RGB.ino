// Sen Mecatronique
// Suis-moi sur Youtube : https://www.youtube.com/channel/UC6kEnwoRBb-1Av36WA99mzQ 


/*
 * Code d'exemple pour une LED RGB (+16 millions de couleurs).
 */

/* Broches */
const byte PIN_LED_R = 9;
const byte PIN_LED_G = 10;
const byte PIN_LED_B = 11;

// Fonction setup(), appelée au démarrage de la carte Arduino
void setup() {

  // Initialise les broches
  pinMode(PIN_LED_R, OUTPUT);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);
  displayColor(0, 0, 0);
}

// Fonction loop(), appelée continuellement en boucle tant que la carte Arduino est alimentée
void loop() {
  
  /* Code de démonstration */
  displayColor(255, 0, 0);
  delay(1000);
  
  displayColor(0, 255, 0);
  delay(1000);
  
  displayColor(0, 0, 255);
  delay(1000);
  
  displayColor(255, 0, 255);
  delay(1000);
  
  displayColor(0, 255, 255);
  delay(1000);
  
  displayColor(255, 255, 0);
  delay(1000);
  
  displayColor(255, 255, 255);
  delay(1000);
  
  displayColor(0, 0, 0);
  delay(1000);
}

/** Affiche une couleur */
void displayColor(byte r, byte g, byte b) {

  // Assigne l'état des broches
  
  // Version cathode commune
  //analogWrite(PIN_LED_R, r);
  //analogWrite(PIN_LED_G, g);
  //analogWrite(PIN_LED_B, b);
  // Version anode commune
  analogWrite(PIN_LED_R, ~r);
  analogWrite(PIN_LED_G, ~g);
  analogWrite(PIN_LED_B, ~b);
}

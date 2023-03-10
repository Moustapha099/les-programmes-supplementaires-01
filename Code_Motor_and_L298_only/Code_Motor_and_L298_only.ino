#define PIN_IN1 4  // IN1 Module L298N
#define PIN_IN2 3  // IN2 Module L298N
#define PIN_ENA 5  // ENA Module L298N

#define POT_PIN A0 // A0 ADC Potentiometre

unsigned int moveDelay = 2000; // Temps en mouvement avant changement de direction
unsigned long startMoveAt; // Pour stocker la valeur en MS au moment du start

enum DIRECTIONS {
  FORWARD = 0,
  BACKWARD
};

DIRECTIONS nextDirection = FORWARD;

// Marche avant
void forward() {
  digitalWrite(PIN_IN1, HIGH);  // IN1 à l'état HAUT
  digitalWrite(PIN_IN2, LOW);   // IN2 à l'état BAS
}

// Marche arrière
void backward() {
  digitalWrite(PIN_IN1, LOW);  // IN1 à l'état BAS
  digitalWrite(PIN_IN2, HIGH); // IN2 à l'état HAUT
}

// Roue libre (avec un delay)
void freeWheel(unsigned int delayMs) {
  pinMode(PIN_ENA, OUTPUT); // ENA en sortie (pour déactiver le mode PWM)
  digitalWrite(PIN_IN1, LOW);  // IN1 à l'état BAS
  digitalWrite(PIN_IN2, LOW);  // IN2 à l'état BAS
  digitalWrite(PIN_ENA, LOW);  // ENA à l'état BAS
  delay(delayMs);
}

void setup() {
  pinMode(PIN_IN1, OUTPUT); // In1 en sortie
  pinMode(PIN_IN2, OUTPUT); // In2 en sortie
  pinMode(PIN_ENA, OUTPUT); // ENA en sortie

  // Moteur en roue libre
  digitalWrite(PIN_IN1, LOW);
  digitalWrite(PIN_IN2, LOW);
  digitalWrite(PIN_ENA, LOW);
}

void loop() {
  // Récupération de la valeur du potentiometre
  uint16_t potValue = analogRead(POT_PIN);
  // Génération du signal PWM vers la PIN ENA du module L298N
  analogWrite(PIN_ENA, map(potValue, 0, 1023, 0, 255));

  if ( (millis() - startMoveAt) >= moveDelay ) {
    switch(nextDirection) {
      case FORWARD:
        freeWheel(500); // en roue libre pendant 500ms
        // Marche avant pendant 2 secondes
        moveDelay = 2000;
        forward();
        startMoveAt = millis();
        nextDirection = BACKWARD;
        break;
      case BACKWARD:
        freeWheel(500); // en roue libre pendant 500ms
        // Marche arrière pendant 5 secondes
        moveDelay = 5000;
        backward();
        startMoveAt = millis();
        nextDirection = FORWARD;
        break;
    }
  }
  

  
}

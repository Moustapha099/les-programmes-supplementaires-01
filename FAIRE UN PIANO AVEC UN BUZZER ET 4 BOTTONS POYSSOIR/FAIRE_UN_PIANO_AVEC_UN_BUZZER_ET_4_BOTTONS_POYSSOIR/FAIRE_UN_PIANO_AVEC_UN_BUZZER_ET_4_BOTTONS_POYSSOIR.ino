// Frequencies (in Hz) of our piano keys
// From: https://en.wikipedia.org/wiki/Piano_key_frequencies
#define KEY_C 262  // 261.6256 Hz (middle C)
#define KEY_D 294  // 293.6648 Hz
#define KEY_E 330  // 329.6276 Hz
#define KEY_F 350  // 349.2282 Hz
#define KEY_G 392  // 391.9954 Hz

// I lay out my buttons like piano keys. So, lower frequencies on left
// and increasingly higher frequencies to the right
// Change this depending on how you've laid out your keys
const int INPUT_BUTTON_C_PIN = 2;
const int INPUT_BUTTON_D_PIN = 4;
const int INPUT_BUTTON_E_PIN = 8;
const int INPUT_BUTTON_F_PIN = 10;

//On l'a pas choisi
const int INPUT_BUTTON_G_PIN = 6;

const int OUTPUT_PIEZO_PIN = 7 ;
const int OUTPUT_LED_PIN = 12 ; // visual feedback on button press
const int OUTPUT_LED_PIN_RED = 3 ;

// By default, we assume buttons are in pull-up configurations
// Switch the following to false and change INPUT_PULLUP belows
// to INPUT
const boolean _buttonsAreActiveLow = true; 



void setup() {
  pinMode(INPUT_BUTTON_C_PIN, INPUT_PULLUP);
  pinMode(INPUT_BUTTON_D_PIN, INPUT_PULLUP);
  pinMode(INPUT_BUTTON_E_PIN, INPUT_PULLUP);
  pinMode(INPUT_BUTTON_F_PIN, INPUT_PULLUP);
  pinMode(INPUT_BUTTON_G_PIN, INPUT_PULLUP);
  pinMode(OUTPUT_PIEZO_PIN, OUTPUT);
  pinMode(OUTPUT_LED_PIN, OUTPUT);
}

void loop() {

  // tone() generates a square wave of the specified frequency (and 50% duty cycle) on a pin. 
  // A duration can be specified, otherwise the wave continues until a call to noTone().
  // See: https://www.arduino.cc/reference/en/language/functions/advanced-io/tone/
  // 
  // Check each button to see if they're pressed. If so, play the corresponding note
  // We can only play one tone at a time, hence the massive if/else block
  if(isButtonPressed(INPUT_BUTTON_C_PIN)){
    tone(OUTPUT_PIEZO_PIN, KEY_C);
  }else if(isButtonPressed(INPUT_BUTTON_D_PIN)){
    tone(OUTPUT_PIEZO_PIN, KEY_D);
  }else if(isButtonPressed(INPUT_BUTTON_E_PIN)){
    tone(OUTPUT_PIEZO_PIN, KEY_E);
  }else if(isButtonPressed(INPUT_BUTTON_F_PIN)){
    tone(OUTPUT_PIEZO_PIN, KEY_F);
  }else if(isButtonPressed(INPUT_BUTTON_G_PIN)){
    tone(OUTPUT_PIEZO_PIN, KEY_G);
  }else{
    noTone(OUTPUT_PIEZO_PIN); // turn off the waveform
    digitalWrite(OUTPUT_LED_PIN, LOW);

    digitalWrite(OUTPUT_LED_PIN_RED, HIGH);
  }
}

boolean isButtonPressed(int btnPin){
  int btnVal = digitalRead(btnPin);
  if(_buttonsAreActiveLow && btnVal == LOW){
    // button is hooked up with pull-up resistor
    // and is in a pressed state
    digitalWrite(OUTPUT_LED_PIN, HIGH);
    return true;
  }else if(!_buttonsAreActiveLow && btnVal == HIGH){
    // button is hooked up with a pull-down resistor
    // and is in a pressed state
    digitalWrite(OUTPUT_LED_PIN, HIGH);
    return true;
  }

  // button is not pressed
  return false;
}

#include<LiquidCrystal.h>
LiquidCrystal lcd(11,10,5,4,3,2);
#define sensor A0
byte degree[8] =
{
0b00011,
0b00011,
0b00000,
0b00000,
0b00000,
0b00000,
0b00000,
0b00000
};
void setup()
{
lcd.begin(16,2);
lcd.createChar(1, degree);
lcd.setCursor(1,0);
lcd.print(" Thermometre ");
lcd.setCursor(3,1);
lcd.print(" Digital ");
delay(2000);
lcd.clear();
}
void loop()
{
/*---------Temperature-------*/
float reading=analogRead(sensor);
float temperature=reading*(5.0/1023.0)*100;
delay(10);
 
/*------Display Result------*/
lcd.clear();
lcd.setCursor(2,0);
lcd.print("Temperature");
lcd.setCursor(4,1);
lcd.print(temperature);
lcd.write(1);
lcd.print("C");
delay(1000);
}

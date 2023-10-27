#include <LiquidCrystal.h>

float temp = 0;
int sensor = 0;
int led = 13;
int motor = 10;
//int seconds = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.print("Temperatura:");
  Serial.begin(9600);
  pinMode (led, OUTPUT);
  pinMode (motor, OUTPUT);
}

void loop()
{
  temp = (sensor * (500.0/1024.0)) - 50.0;
  sensor = analogRead(A0);
  Serial.print(temp);
  lcd_1.setCursor(0, 1);
  lcd_1.print(temp);
  if(temp<=10){
  	digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
  if(temp>=11 && temp <= 25){
  	digitalWrite(led, LOW);
  	digitalWrite(motor, LOW);
  }
  if(temp>=26){
  	digitalWrite(led, HIGH);
    delay(500);
  	digitalWrite(motor, HIGH);
  }
}
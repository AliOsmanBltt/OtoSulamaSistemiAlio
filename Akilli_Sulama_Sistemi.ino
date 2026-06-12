#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int moistureSensorPin = A0;
const int relayPin = 13;

const int dryValue = 1023;
const int wetValue = 0;
const int moistureThreshold = 7;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);

  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("Akilli Sulama");
  lcd.setCursor(0, 1);
  lcd.print("Sistemi Hazir...");
  delay(2000);
}

void loop() {
  int sensorValue = analogRead(moistureSensorPin);

  int moisturePercentage = map(sensorValue, dryValue, wetValue, 0, 100);
  moisturePercentage = constrain(moisturePercentage, 0, 100);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nem Orani: ");
  lcd.print(moisturePercentage);
  lcd.print("%");

  lcd.setCursor(0, 1);
  if (moisturePercentage < moistureThreshold) {
    digitalWrite(relayPin, HIGH);
    lcd.print("Durum: SULANIYOR");
  } else {
    digitalWrite(relayPin, LOW);
    lcd.print("Durum: BEKLEMEDE");
  }

  delay(1000);
}

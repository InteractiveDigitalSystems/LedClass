#include <Arduino.h>
#include <Led.h>

int ledPin = 23;
Led led(ledPin);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  led.on();
  Serial.println(led.status());
  delay(1000);
  led.off();
  Serial.println(led.status());
  delay(1000);
}

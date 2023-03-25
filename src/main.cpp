#include <Arduino.h>
#include <WiFi.h>

const char * ssid = "juan";
const char * password = "admin123";
const int puerto = 80;


void setup() {
  pinMode(2, OUTPUT);  //Coloco el pin 2 como salida
}

  void loop(){
    digitalWrite (2,HIGH);
    delay(1000);
    digitalWrite (2, LOW);
    delay(1000);

  }


#include <Arduino.h>
#include <WiFi.h>

const char * ssid = "virus";
const char * password = "a1b2c3d4";


/**
 * @brief Esta es la funcion de configuracion del dispositivo
 * 
 */
void setup() {
  pinMode(2, OUTPUT);  //Coloco el pin 2 como salida
  Serial.begin(115200);
  Serial.println("Inicializando dispositivo");
  WiFi.begin(ssid, password);

  Serial.println("Estableciendo vinculo con el AP.");
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(1000);
  }
  Serial.println("\r\nConexion establecida");

}


/**
 * @brief Esta funcion es un bucle infinito que corresponde al main()
 * 
 */
void loop() {
  digitalWrite(2,HIGH);  //Enciende el LED
  delay(500);  //Espero 500ms
  digitalWrite(2,LOW); //Apaga el Led
  delay(500);  //Espero 500ms
}
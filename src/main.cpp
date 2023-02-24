#include <Arduino.h>
//@author Alvaro
/**
 * @brief Esta es la funcion de configuracion del dispositivo
 * 
 */
void setup() {
  pinMode(2, OUTPUT);  //Coloco el pin 2 como salida
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

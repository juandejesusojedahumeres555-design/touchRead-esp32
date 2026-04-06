/////////////////////////////////////////////////////////////////////////////////
// placa "ESP-32" escrito en el lenguaje "C++" Arduino IDE.                    // 
// este codigo es para ver comprobar o jugar con lo pines tactiles del esp32...//
/////////////////////////////////////////////////////////////////////////////////

int pinLed = 2; // le ponemos un nombre a nuestro pin que esta conectado al led (normalemnte es el 2, te recomiendo ver si tu placa coinside).
                // te recomiendo que borres las lineas 22 y 23 ya que le disen al led que sea touch y no prendera un led o cambia el pin led a otro pin y usa un led ezterno

void setup() {

  Serial.begin(115200); // definimos la velosidad del puerto serie, tiene que conisidir con el de ustedes...
  pinMode(pinLed, OUTPUT); // definimos a nuetri pinLed como OUTPUT(osea de salida).

}

void loop() {

  Serial.print("touch 0: "); // ponemos esto para saber de que pin bienen los datos.
  Serial.println(touchRead(T0)); // pin 4. este es para que salga el valor touch de el pin.
  Serial.print("touch 1: ");
  Serial.println(touchRead(T1)); // pin 0.
  Serial.print("touch 2: ");
  Serial.println(touchRead(T2)); // pin 2.
  Serial.print("touch 3: ");
  Serial.println(touchRead(T3)); // pin 15.
  Serial.print("touch 4: ");
  Serial.println(touchRead(T4)); // pin 13.
  Serial.print("touch 5: ");
  Serial.println(touchRead(T5)); // pin 12.
  Serial.print("touch 6: ");
  Serial.println(touchRead(T6)); // pin 14.
  Serial.print("touch 7: ");
  Serial.println(touchRead(T7)); // pin 27.
  Serial.print("touch 8: ");
  Serial.println(touchRead(T8)); // pin 33.
  Serial.print("touch 9: ");
  Serial.println(touchRead(T9)); // pin 32.

  if (touchRead(T9) > 70) { // aca estamos haciendo un ejemplo para que podiamos usar un pin touch puedes bariar el pin (cambiando "T" con por ej T1 o T2 etc) y el tactil-
                              // -con por ej antes de 1000 puedes poner 100 o 653 lo que tu quieras.
    digitalWrite(pinLed, HIGH); // le desimos al pin led que se prenda.
  } else {                    // esto es para cuando sacas el dedo se apaga.
    digitalWrite(pinLed, LOW); // le desimos al pin led que se apague.
  }

  delay(500); //pausamo el cpu por 1/2 segundos, te recomiendo usar millis(); (uso delay ya que para que se mas legible y no tan engorroso).

}
// muchas gracias por leer, espero que te sirva.

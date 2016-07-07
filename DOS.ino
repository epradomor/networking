
#include <SoftwareSerial.h>  //
SoftwareSerial mySerial(10, 11); // RX, TX //

//Variables
  int LED=13;
  int BOTON=7;
  int DATO=HIGH;
 
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BOTON,INPUT);
  mySerial.begin(9600);
}
 
void loop() {
 mySerial.write(digitalRead(BOTON));
 delay(110);
 
 if(mySerial.available()){
 DATO= mySerial.read();
 }
      if(DATO==HIGH)
     digitalWrite(LED,HIGH);
     else
     digitalWrite(LED,LOW);
}

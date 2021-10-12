// radio pins, libraries and setup
const int CEPIN = 9;
const int CSNPIN = 10;

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(CEPIN, CSNPIN);  

const byte address[6] = "00001"; 

//pushbuttons connections
const int angryButton = 4;
const int happyButton = 2;
const int normalButton = 8;

void setup() {
  
  Serial.begin(115200);

  // RF24 setup
  boolean retval = radio.begin(); 
  Serial.println(retval);
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();        
}

void loop() {

  //check cases
  int angry = digitalRead(angryButton) << 2;
  int normal = digitalRead(happyButton) << 1;
  int happy = digitalRead(normalButton) << 0;
  int data = angry | happy | normal;
    if (data) {
      Serial.print( "sending data = " );
      Serial.println(data);
      radio.write(&data, sizeof(data)) ;
    }
}

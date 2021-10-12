// radio pins, libraries and setup
const int CEPIN = 9;
const int CSNPIN = 10;

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(CEPIN, CSNPIN);

const byte address[6] = "00001";

// motor 1 controller pins
const int in1Pin = 4;
const int in2Pin = 5;
const int in3Pin = 7;
const int in4Pin = 6;

// motor 2 controller pins
const int in5Pin = A0;
const int in6Pin = A1;
const int in7Pin = A2;
const int in8Pin = A3;



void setup() {
  
  Serial.begin(115200);
  
  // RF24 setup
  bool retval = radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
  
  //motors controller pins
  pinMode(in1Pin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in5Pin, OUTPUT);
  pinMode(in7Pin, OUTPUT);
  
  //set LEDs as outputs
  pinMode(A4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  
  // If statement to start looking for data
  if (radio.available()){
    int data;

    // Start reading the data
    radio.read(&data, sizeof(data));

    // Switch case to control each sequence
    switch (data){
      
      // If button 1 was pressed, sequence 1 should start
      case 0x01:
    
      Serial.println("Blue/Normal");
      
      // Move motor and LED turn on
      digitalWrite(2, HIGH);
      digitalWrite (in3Pin, 140);
      analogWrite (in4Pin, LOW);
      digitalWrite (in5Pin, 140);
      analogWrite (in6Pin, LOW);
      digitalWrite (in1Pin, 140);
      analogWrite (in2Pin, LOW);
      digitalWrite (in7Pin, 140);
      analogWrite (in8Pin, LOW);
      delay (1000);
      
      //LED turn off
      digitalWrite(2, LOW);
      break;
      
      // If button 2 was pressed, sequence 2 should start
      case 0x02:
      
      Serial.println("Yellow/Happy");
      
      // Move motor and LED turn on
      digitalWrite(A4, HIGH);
      digitalWrite (in3Pin, 140);
      analogWrite (in4Pin, LOW);
      digitalWrite (in7Pin, 140);
      analogWrite (in8Pin, LOW);
      digitalWrite (in5Pin, 0);
      analogWrite (in6Pin, HIGH);
      digitalWrite (in1Pin, 0);
      analogWrite (in2Pin, HIGH);
      delay (600);
      digitalWrite (in3Pin, 0);
      analogWrite (in4Pin, HIGH);
      digitalWrite (in7Pin, 0);
      analogWrite (in8Pin, HIGH);
      digitalWrite (in5Pin, 140);
      analogWrite (in6Pin, LOW);
      digitalWrite (in1Pin, 140);
      analogWrite (in2Pin, LOW);
      delay (600);
      
      //LED turn off
      digitalWrite(A4, LOW);
      break;
      
      // If button 3 was pressed, sequence 3 should start
      case 0x04:
      
      Serial.println("Red/Angry");
      
      // Move motor forward and LED turn on
      digitalWrite(3, HIGH);
      digitalWrite (in3Pin, 255);
      analogWrite (in4Pin, LOW);
      digitalWrite (in5Pin, 255);
      analogWrite (in6Pin, LOW);
      digitalWrite (in1Pin, 255);
      analogWrite (in2Pin, LOW);
      digitalWrite (in7Pin, 255);
      analogWrite (in8Pin, LOW);
      
      delay (1000);

      // Move motor backward
      digitalWrite (in3Pin, LOW);
      analogWrite (in4Pin, 255);
      digitalWrite (in5Pin, LOW);
      analogWrite (in6Pin, 255);
      digitalWrite (in1Pin, LOW);
      analogWrite (in2Pin, 255);
      digitalWrite (in7Pin, LOW);
      analogWrite (in8Pin, 255);
      delay (1000);

      //LED turn off
      digitalWrite(3, LOW);
      break;

      // if nothing being received
      default:
      Serial.println("invalid code");
      stop();
      digitalWrite (in1Pin, LOW);
      digitalWrite (in2Pin, LOW);
      digitalWrite (in5Pin, LOW);
      digitalWrite (in6Pin, LOW);
      break;
    }
  }else{
    stop();
  }
  delay(5);
}

// Stop all motors from working
void stop() {
  digitalWrite(in1Pin, LOW);
  analogWrite(in2Pin, 0);
  digitalWrite(in3Pin, LOW);
  analogWrite(in4Pin, 0);
  digitalWrite(in5Pin, LOW);
  analogWrite(in6Pin, 0);
  digitalWrite(in7Pin, LOW);
  analogWrite(in8Pin, 0);
}

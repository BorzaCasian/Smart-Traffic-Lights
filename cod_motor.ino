#include <IRremote.h>

int RECV_PIN = 11;  
IRrecv IR(RECV_PIN);


int motor1A = 5;  
int motor1B = 6;  
int motor2A = 9;  
int motor2B = 10;  

void setup() {
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
  analogWrite(motor1A, 0);  
  analogWrite(motor1B, 0);
  analogWrite(motor2A, 0);
  analogWrite(motor2B, 0);

  IR.enableIRIn();
  Serial.begin(9600);
}

void loop() {
  if (IR.decode()) {
    Serial.println(IR.decodedIRData.decodedRawData, HEX);

    switch (IR.decodedIRData.decodedRawData) {
      case 0xB946FF00:
        // Codul butonului pentru "înainte"
        // Mișcare înainte
        analogWrite(motor1A, 128);
        analogWrite(motor1B, 0);
        analogWrite(motor2A, 128);
        analogWrite(motor2B, 0);
        break;
      case 0xEA15FF00:
        // Codul butonului pentru "înapoi"
        // Mișcare înapoi
        analogWrite(motor1A, 0);
        analogWrite(motor1B, 128);
        analogWrite(motor2A, 0);
        analogWrite(motor2B, 128);
        break;
      case 0xBB44FF00: // Codul butonului pentru "stânga"
        // Mișcare la stânga
        analogWrite(motor1A, 0);
        analogWrite(motor1B, 128);
        analogWrite(motor2A, 128);
        analogWrite(motor2B, 0);
        break;
      case 0xBC43FF00: // Codul butonului pentru "dreapta"
        // Mișcare la dreapta
        analogWrite(motor1A, 128);
        analogWrite(motor1B, 0);
        analogWrite(motor2A, 0);
        analogWrite(motor2B, 128);
        break;
      default:
        // Opriți motoarele pentru orice alt buton
        analogWrite(motor1A, 0);
        analogWrite(motor1B, 0);
        analogWrite(motor2A, 0);
        analogWrite(motor2B, 0);
        break;

        
    }
    
    IR.resume(); // Reinițializați receptorul infraroșu pentru următoarea comandă
  }
}
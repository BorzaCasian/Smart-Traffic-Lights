#include <NewPing.h>



const int pinVerde = 2;
const int pinGalben = 3;
const int pinRosu = 4;
const int pinVerde1 = 5;
const int pinGalben1 = 6;
const int pinRosu1 = 7;
const int Sonerie = A0;

int trigger_pin1 = 9;
int echo_pin1 = 8;
int trigger_pin2 = 10;
int echo_pin2 = 11;
int trigger_pin3 = 12;
int echo_pin3 = 13;
int max_dist_cm = 15;

NewPing sonar1(trigger_pin1, echo_pin1, max_dist_cm);
NewPing sonar2(trigger_pin2, echo_pin2, max_dist_cm);
NewPing sonar3(trigger_pin3, echo_pin3, max_dist_cm);

bool trebuieReinceput = false;

void setup() {
  Serial.begin(9600);
  delay(50);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinGalben, OUTPUT);
  pinMode(pinRosu, OUTPUT);
   pinMode(pinVerde1, OUTPUT);
  pinMode(pinGalben1, OUTPUT);
  pinMode(pinRosu1, OUTPUT);
}



void loop() {
while(1)
{
 Serial.print("Distanta1: ");
 int dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 int dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 int dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);


if (trebuieReinceput) {
        
        trebuieReinceput = false;
        break;
        continue; 
    }

 int alarm_dist_cm = 15;
 if((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0)  )
 {
   Serial.print("am intart pe primul if ");

   digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);
  digitalWrite(Sonerie, HIGH);


  delay(200);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinGalben, LOW);

  delay(200);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinGalben, LOW);

  delay(200);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinGalben, LOW);

  
  delay(200);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinGalben, LOW);

    delay(200);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinGalben, HIGH);

    delay(200);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinGalben, LOW);



do{


 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

Serial.print("am intart pe primul if ");
  digitalWrite(pinVerde, HIGH);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1,LOW );
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1,HIGH);

}while((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0));

  
  digitalWrite(pinVerde, HIGH);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1,LOW );
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1,HIGH);
  
  delay(1000);
  
 }
 
 else if((dist_cm2 <= alarm_dist_cm) &&  (dist_cm2 != 0) )
 {
   
    Serial.print("am intart pe al doilea if ");

  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);
  digitalWrite(Sonerie, HIGH);


  delay(200);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinGalben, LOW);

  delay(200);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinGalben, HIGH);

  delay(200);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinGalben, LOW);

    delay(200);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinGalben, HIGH);

    delay(200);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinGalben, LOW);


  
  do{

    dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

   digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, HIGH);
   digitalWrite(pinVerde1,HIGH );
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1,LOW);
  
  }while((dist_cm2 <= alarm_dist_cm) &&  (dist_cm2 != 0));
 

   digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, HIGH);
   digitalWrite(pinVerde1,HIGH );
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1,LOW);

  delay(1000);
  
  
}
 else if((dist_cm3 <= alarm_dist_cm) &&  (dist_cm3 != 0) )
{

   Serial.print("am intart pe al treilea if ");
// Setați verde și opriți celelalte culori pentru un anumit timp
 do{

   dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);
 
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);
  delay(100);
  digitalWrite(Sonerie, HIGH);
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);
  digitalWrite(Sonerie, LOW);
  delay(100);

 }while((dist_cm3 <= alarm_dist_cm) &&  (dist_cm3 != 0));

  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);
  delay(200);
  digitalWrite(Sonerie, HIGH);
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);
  digitalWrite(Sonerie, LOW);
  delay(200);   
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);
  delay(200);
  digitalWrite(Sonerie, HIGH);
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);
  digitalWrite(Sonerie, LOW);
  delay(200); 
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);
  delay(200);
  digitalWrite(Sonerie, HIGH);
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
   digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);
  digitalWrite(Sonerie, LOW);
  delay(200); 

}


else{

 

  
  // Setați galben și opriți celelalte culori pentru un anumit timp
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);

 Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

 if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
        
    }

 Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(200);  // 0.2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);


if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
        
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
        
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        
    }

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(500);  // 2 secunde
   digitalWrite(pinVerde, HIGH);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, HIGH);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(500);  // 2 secunde
  digitalWrite(pinVerde, HIGH);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, HIGH);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(1000);  // 2 secunde
  digitalWrite(pinVerde, HIGH);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, HIGH);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(500);  // 2 secunde
  digitalWrite(pinVerde, HIGH);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, HIGH);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(1000);  // 2 secunde
  digitalWrite(pinVerde, HIGH);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, HIGH);


if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(500);  // 2 secunde
  digitalWrite(pinVerde, HIGH);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, HIGH);


if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(500);  // 2 secunde
  digitalWrite(pinVerde, HIGH);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, HIGH);


  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);


  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);


  delay(200);  // 2 secunde

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  // Setați roșu și opriți celelalte culori pentru un anumit timp
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, HIGH);
  digitalWrite(pinVerde1, HIGH);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(1000);  // 5 secunde
Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(1000);  // 5 secunde

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(1000);  // 5 secunde

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(1000);  // 5 secunde


Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(1000);  // 5 secunde

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(1000);  // 5 secunde

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(1000);  // 5 secunde
if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

  delay(1000);  // 5 secunde sonar1.ping_cm(dist_cm1);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }
  delay(1000);  // 5 secunde

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(1000);  // 5 secunde

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
       break; 
    }
   // Setați galben și opriți celelalte culori pentru un anumit timp
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);

Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
       break; 
    }
  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }
Serial.print("Distanta1: ");
 dist_cm1 = sonar1.ping_cm(dist_cm1);
 Serial.println(dist_cm1);
 Serial.print("Distanta2: ");
 dist_cm2 = sonar2.ping_cm();
 Serial.println(dist_cm2);
 Serial.print("Distanta3: ");
 dist_cm3 = sonar3.ping_cm();
 Serial.println(dist_cm3);


  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);
if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
       break; 
    }
   
  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, LOW);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, LOW);
  digitalWrite(pinRosu1, LOW);

if ((dist_cm1 <= alarm_dist_cm) && (dist_cm1 != 0) || (dist_cm2 <= alarm_dist_cm) && (dist_cm2 != 0) || (dist_cm3 <= alarm_dist_cm) && (dist_cm3 != 0)) {
        // Dacă condiția necesită reînceperea buclei, setează flag-ul pe true
        trebuieReinceput = true;
        break;
    }

  delay(200);  // 2 secunde
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinGalben, HIGH);
  digitalWrite(pinRosu, LOW);
  digitalWrite(pinVerde1, LOW);
  digitalWrite(pinGalben1, HIGH);
  digitalWrite(pinRosu1, LOW);



}
  
}
}

// #include <AccelStepper.h>
const int dirPin=14;
const int stepPin=13;
const int stepPerRev=50;
void setup() {
  // put your setup code here, to run once:
  pinMode(stepPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  Serial.begin(12600);
}
void move(){
 for(int i=0;i<stepPerRev;i++){
  digitalWrite(stepPin,HIGH);
  delay(1000);
  digitalWrite(stepPin,LOW);
  delay(1000);
}
}



void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(dirPin,HIGH);
   move();
   digitalWrite(dirPin,LOW);
   move();
   
   
}

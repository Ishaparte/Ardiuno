#define p 6
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode(p, INPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(digitalRead(p));
     if( digitalRead(p)== LOW){
      Serial.println("HIGH");
    }
    if(digitalRead(p)==HIGH){

      Serial.println("LOW");
    }
}

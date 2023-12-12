#define dir 3
#define pwm 2
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pwm,OUTPUT);
pinMode(dir,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(pwm,100);
   digitalWrite(dir,HIGH);
   delay(2000);
   }

#define ENA 13
#define ENB 12


static int count1=0; 
int dis;
static int pr_time=0;
int rpm =0;
static int req_dis=70;
 double r;

volatile int count;

IRAM_ATTR void interr()       
{                                 
  int chanA = digitalRead(ENA); 
  int  chanB = digitalRead(ENB); 
                                  
  if ((chanA == HIGH) != (chanB == HIGH)) 
    count++;
  else                            
    count--;           
}



void setup() {
  // put your setup code here, to run once:
  pinMode(ENA, INPUT);
  pinMode(ENB, INPUT);
  /

  attachInterrupt(digitalPinToInterrupt(ENA), interr, CHANGE);
  Serial.begin(115200);
 }

void loop() {

  // put your main code here, to run repeatedly:
  Serial.printf("count: %d\n", count);
  
  
}

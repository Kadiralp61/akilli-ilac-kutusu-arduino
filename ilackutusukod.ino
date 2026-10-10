const int buton1= 2;
const int buton2= 3;
const int buton3= 4;
const int buton4 =5;
const int butonX =6;
const int led1 =8;
const int led2 =9;
const int led3=10;
const int led4 =11;

int bt1=0;
int bt2=0;
int bt3=0;
int bt4=0;
int btX=0;


unsigned long SimdikiZaman2 = 0;
unsigned long OncekiZaman2 = 0;
unsigned long SimdikiZaman1 = 0;
unsigned long OncekiZaman1 = 0;
unsigned long SimdikiZaman3 = 0;
unsigned long OncekiZaman3 = 0;
unsigned long SimdikiZaman4 = 0;
unsigned long OncekiZaman4 = 0;

unsigned long aralik1 = 10000;
unsigned long aralik2 = 15000;
unsigned long aralik3 = 20000;
unsigned long aralik4 = 25000;


void setup()
{
Serial.begin(9600);
  
pinMode(buton1,INPUT);
pinMode(buton2,INPUT);
pinMode(buton3,INPUT);
pinMode(buton4,INPUT);
pinMode(butonX,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);

}

void loop()
{
  SimdikiZaman1 = millis();
  if  (SimdikiZaman1 - OncekiZaman1 >= aralik1)
  {
    digitalWrite(led1,HIGH);
     OncekiZaman1=SimdikiZaman1;
   
   
    
    
  }
  if (digitalRead(buton1)==HIGH and bt1==0){
    bt1=1;//butona bastık
     }
  if (digitalRead(buton1)==LOW and bt1==1){//elimizi butondan çektik
    digitalWrite(led1,LOW);
    bt1=0;
    
    
  }
   if (digitalRead(butonX)==HIGH and btX==0){
    btX=1;//butona bastık
     }
  if (digitalRead(butonX)==LOW and btX==1){//elimizi butondan çektik
    SimdikiZaman1=0;
    SimdikiZaman2=0;
    SimdikiZaman3=0;
    SimdikiZaman4=0;
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    btX=0;
   
  
  }
  SimdikiZaman2 = millis();
  if  (SimdikiZaman2 - OncekiZaman2 >= aralik2)
  {
    digitalWrite(led2,HIGH);
    OncekiZaman2 =SimdikiZaman2;
    
    
}
if (digitalRead(buton2)==HIGH and bt2==0){
    bt2=1;//butona bastık
     }
  if (digitalRead(buton2)==LOW and bt2==1){//elimizi butondan çektik
    digitalWrite(led2,LOW);
    bt2=0;
    
    
  }

 SimdikiZaman3 = millis();
  if  (SimdikiZaman3 - OncekiZaman3 >= aralik3)
  {
    digitalWrite(led3,HIGH);
    OncekiZaman3 =SimdikiZaman3;
    
}
  if (digitalRead(buton3)==HIGH and bt3==0){
    bt3=1;//butona bastık
     }
  if (digitalRead(buton3)==LOW and bt3==1){//elimizi butondan çektik
    digitalWrite(led3,LOW);
    bt3=0;
     }
SimdikiZaman4 = millis();
  if  (SimdikiZaman4 - OncekiZaman4 >= aralik4)
  {
    digitalWrite(led4,HIGH);
    OncekiZaman4 =SimdikiZaman4;
    
}
if (digitalRead(buton4)==HIGH and bt4==0){
    bt4=1;//butona bastık
     }
  if (digitalRead(buton4)==LOW and bt4==1){//elimizi butondan çektik
    digitalWrite(led4,LOW);
    bt4=0;
     }

}
# define LedRouge 8 // Led red
# define LedJaune 9 // Led yellow
# define LedVerte 2 // Led green
# define LedBleue 3 // Led blue
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT); 
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}

void loop(){
 
 digitalWrite(9,HIGH);
 delay(100);
 digitalWrite(9,LOW);
 digitalWrite(2,HIGH);
 delay(100);
 digitalWrite(2,LOW);
 digitalWrite(8,HIGH);
 delay(100);
 digitalWrite(8,LOW);
 delay(100);
}

void seqCouleur(){
  if(digitalRead(8)==LOW){
  Vert();
  }
  if(digitalRead(2)==LOW){
  Jaune();
  }
  if(digitalRead(9)==LOW){
  Rouge();
  }  
  
}

void Rouge(){
 digitalWrite(8,HIGH);
 delay(2000);
 digitalWrite(8,LOW); 
}

void Vert(){
 digitalWrite(2,HIGH);
 delay(3000);
 digitalWrite(2,LOW); 
}

void Jaune(){
 digitalWrite(9,HIGH);
 delay(1000);
 digitalWrite(9,LOW); 
}

void SeqRVJ(int time)
{
  int times;
  
  if(time<3000){
    times=3000;
  }else{
    times=time;
  }
  digitalWrite(2,HIGH);
  delay(times);
  digitalWrite(2,LOW);
  
  digitalWrite(9,HIGH);
  if(time<1000){
    times=1000;
  }else{
    times=time;
  }
  delay(times);
  
  
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  if(time<2000){
    times=2000;
  }else{
    times=time;
  }
  delay(times);
  digitalWrite(8,LOW);
}

int tog = 13;
int RL1=7;
int RL2=6;

void setup() {
  // put your setup code here, to run once:
pinMode(tog,INPUT);
pinMode(RL1,OUTPUT);
pinMode(RL2,OUTPUT);
 digitalWrite(RL1,LOW);
 digitalWrite(RL2,LOW); 
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(tog)==0){
 digitalWrite(RL1,HIGH);
 digitalWrite(RL2,LOW); 
}
if(digitalRead(tog)==1){
 digitalWrite(RL1,LOW);
 digitalWrite(RL2,HIGH); 
}
}

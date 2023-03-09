//Ligar e apagar led

int j=0;
int i=0;
int k=0;

void setup(){
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
}

void loop(){

  for(j=1;j<=5;j++){
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  }
   for(i=1;i<=5;i++){
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
  }
   for(k=1;k<=5;k++){
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000);
  }
}

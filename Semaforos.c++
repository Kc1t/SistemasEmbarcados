//09/03/2023 - Fazer um semaforo duplo

int ledver1 = 3;
int ledamarelo = 2;
int ledverde  = 1;
int ledver2 = 10;
int ledamar2 = 9;
int ledverde2  = 8;

void setup()
{
//configura cada um dos pins como saída
   pinMode(1, OUTPUT); 
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
}

void loop()
{

 digitalWrite(ledamar2,0);
 digitalWrite(ledver1,0);
 digitalWrite(ledver2,1);
 digitalWrite(ledverde,1); //liga o led verde
 delay(3000); // o verde fica ligado por 3s

 digitalWrite(ledverde,0);
 digitalWrite(ledamarelo,1);
 delay(1000);

 digitalWrite(ledamarelo,0);
 digitalWrite(ledver1,1);
 digitalWrite(ledver2,0);
 digitalWrite(ledverde2,1);
 delay(2000);

 digitalWrite(ledverde2,0);
 digitalWrite(ledamar2,1);
 delay(1000);

}


primeira versão

// int ledvermelho = 3;
// int ledamarelo = 2;
// int ledverde  = 1;
// int ledvermelho2 = 10;
// int ledamarelo2 = 9;
// int ledverde2  = 8;
// void setup()
// {
//   pinMode(1, OUTPUT);
//    pinMode(2, OUTPUT);
//    pinMode(3, OUTPUT);
//    pinMode(8, OUTPUT);
//    pinMode(9, OUTPUT);
//    pinMode(10, OUTPUT);
// }

// void loop()
// {
//  digitalWrite(ledamarelo2,0);
//  digitalWrite(ledvermelho,0);
//  digitalWrite(ledvermelho2,1);
//  digitalWrite(ledverde,1);
//  delay(3000);

//  digitalWrite(ledverde,0);
//  digitalWrite(ledamarelo,1);
//  delay(1000);

//  digitalWrite(ledamarelo,0);
//  digitalWrite(ledvermelho,1);
//  digitalWrite(ledvermelho2,0);
//  digitalWrite(ledverde2,1);
//  delay(2000);

//  digitalWrite(ledverde2,0);
//  digitalWrite(ledamarelo2,1);
//  delay(1000);


// }

link para o tinkercad: "https://www.tinkercad.com/things/iKp60UQEPU6-atividade-de-botao/editel?sharecode=7gMCZ_KGKXrqtvZnIfVZCKzEZK-XQ4n0CDoZahiVtyo"

int LED = 12; //LED conectado ao pino 13
int BOTAO = 2; //Botão conectado ao pino 8
int ESTADO_BOTAO = 0; //Variável para leitura do estado do Botão
int VAR = 0;
int VAR2 = 0;

void setup()

{
 pinMode(LED, OUTPUT); //Pino 10 do arduino como saída
 pinMode(BOTAO, INPUT); //Pino com botão será entrada
}

void loop()

{
 VAR = digitalRead(BOTAO); //Armazena o Estado do botão.
 //Se sim grava LOW (0) na variável
 //Se não grava HIGH (1) na variável
 if (VAR == 1 && VAR2 == 0) //Se botão estiver pressionado (HIGH)
 {
 ESTADO_BOTAO = 1 - ESTADO_BOTAO;
   delay(20);
 }
 VAR2=VAR;
  if(ESTADO_BOTAO == 1){
    
 digitalWrite(LED, 1);//Acende o led conectado ao pino 13

 }
 else //se não estiver pressionado
 {
 digitalWrite(LED, 0); //Apaga o led conectado ao pino 13
 }
}

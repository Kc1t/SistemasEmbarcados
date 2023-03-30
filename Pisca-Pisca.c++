// https://www.tinkercad.com/things/kcu6HG8CMDU-6-leds/editel

int leds[] = {2, 3, 4, 5, 6}; // define os pinos dos leds
int ledRGB[] = {9, 10, 11}; // define os pinos do led RGB

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT); // define os leds como saídas
  }
  for (int i = 0; i < 3; i++) {
    pinMode(ledRGB[i], OUTPUT); // define o led RGB como saída
  }
}

void loop() {
  // Passo 1: apaga todos os leds
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], LOW);
  }
  
  // Passo 2: acende um a um até o último
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200);
  }
  
  // Passo 3: pisca todos os leds por 10 vezes
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
      digitalWrite(leds[j], HIGH);
    }
    digitalWrite(ledRGB[0], HIGH); // acende o led RGB em vermelho
    delay(100);
    digitalWrite(ledRGB[0], LOW); // apaga o led RGB
    for (int j = 0; j < 5; j++) {
      digitalWrite(leds[j], LOW);
    }
    digitalWrite(ledRGB[1], HIGH); // acende o led RGB em verde
    delay(100);
    digitalWrite(ledRGB[1], LOW); // apaga o led RGB
  }
  
  // Passo 4: acende um a um, apagando o anterior
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200);
    digitalWrite(leds[i], LOW);
  }
  
  // Passo 5: pisca todos os leds por 5 vezes
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      digitalWrite(leds[j], HIGH);
    }
    digitalWrite(ledRGB[2], HIGH); // acende o led RGB em azul
    delay(100);
    digitalWrite(ledRGB[2], LOW); // apaga o led RGB
    for (int j = 0; j < 5; j++) {
      digitalWrite(leds[j], LOW);
    }
    delay(100);
  }
  
  // Passo 6: acende um a um sem apagar o anterior
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200);
  }
  digitalWrite(ledRGB[0], HIGH);
  digitalWrite(ledRGB[1], HIGH);
  digitalWrite(ledRGB[2], HIGH);
  delay(500);
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], LOW);
  }
  digitalWrite(ledRGB[0], LOW);
  digitalWrite(ledRGB[1], LOW);
  digitalWrite(ledRGB[2], LOW);

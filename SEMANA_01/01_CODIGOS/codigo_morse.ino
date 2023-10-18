int s = 250; //piscada curta "short"
int l = 750; //piscada longa "long"
int ledPin = 9; //define o pin conectado ao jumper

void setup() {
  //define a saída do pin de energia
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //execute as funções para cada letra em código morse
  morse_s();
  morse_o();
  morse_s();
  delay(2000); //delay entre as mensagens 
}

void s_blink() { //função para a piscada curta 
  digitalWrite(ledPin, HIGH);
  delay(s);
  digitalWrite(ledPin, LOW);
  delay(s);
}

void l_blink() { //função para a piscada longa
  digitalWrite(ledPin, HIGH);
  delay(l);
  digitalWrite(ledPin, LOW);
  delay(l);
}

void morse_s() { //função para a letra s em código morse (3 piscadas curtas)
  for (int i = 1; i <= 3; ++i){
    s_blink();
  }
}

void morse_o() { //função para a letra o em código morse (3 piscadas longas)
  for (int i = 1; i <= 3; ++i){
    l_blink();
  }
}
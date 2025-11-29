
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16,2);


// Definindo o pino do buzzer
int buzzerPin = 14;
int duração = 300;
int espera = 50;
void setup() {
lcd.begin(16,2);
lcd.init();
lcd.backlight();

  pinMode(buzzerPin, OUTPUT);



lcd.setCursor(0, 0);
lcd.print("I");
B4(duração+100);
lcd.clear();
delay(espera);


lcd.setCursor(0, 0);
lcd.print("LOVE");
B4(duração+100);
lcd.clear();
delay(espera);



lcd.setCursor(0, 0);
lcd.print("YOU");
B4(duração + 100);
lcd.clear();
delay(espera);

lcd.setCursor(0, 0);
lcd.print("BAAAABY");
B4(duração+300);
delay(espera);
E4(duração+100);
lcd.clear();
delay(espera - 25);
// Espaço
lcd.setCursor(0, 0);
lcd.print("And if it's quite ");
lcd.setCursor(0, 1);
lcd.print("alright ");
E4(duração - 100);
delay(espera - 25);
Gb4(duração- 100);
delay(espera- 25);
G4(duração - 100);
delay(espera - 25);
B4(duração);
delay(espera);
B4(duração);
delay(espera);
A4(duração + 100);
delay(espera - 25);
lcd.clear();
// Espaço
lcd.setCursor(0, 0);
lcd.print("I need you, baby");
G4(duração-100);
delay(espera - 25);
Gb4(duração-100);
delay(espera -25);
G4(duração-100);
delay(espera -25);
A4(duração+300);
delay(espera);
d4(duração+100);
delay(espera);
lcd.clear();

// Espaço
lcd.setCursor(0, 0);
lcd.print("To warm the");
lcd.setCursor(0, 1);
lcd.print("Lonely night");
d4(duração - 100);
delay(espera - 25);
E4(duração - 100);
delay(espera - 25);
Gb4(duração - 100);
delay(espera-25);
A4(duração);
delay(espera);
A4(duração);
delay(espera);
G4(duração+100);
lcd.clear();

lcd.setCursor(0, 0);
lcd.print("I LOVE YOU");
delay(espera-25);
Gb4(duração-100);
delay(espera-25);
E4(duração-100);
delay(espera-25);
Gb4(duração-100);
delay(espera-25);
lcd.clear();

lcd.setCursor(0, 0);
lcd.print("BAAAABY S2");
G4(duração+300);
delay(espera);
C4(duração+100);
lcd.clear();

lcd.setCursor(0, 0);
lcd.print("Trust in me");
lcd.setCursor(0, 1);
lcd.print("when i saaaayyy!!!!!!!!");
delay(espera+50);
G4(duração-100);
delay(espera-25);
G4(duração+100);
delay(espera-25);
Gb4(duração+100);
delay(espera);
G4(duração-100);
delay(espera-25);
Gb4(duração);
delay(espera-25);
E4(duração+300);
delay(espera-25);
d4(duração+100);
lcd.clear();

delay(1000);

lcd.setCursor(0, 0);
lcd.print("OHH");
B4(duração+100);
lcd.clear();
delay(espera);


lcd.setCursor(0, 0);
lcd.print("PREEETTYYY");
B4(duração+100);
lcd.clear();
delay(espera);



lcd.setCursor(0, 0);
lcd.print("BAAA");
B4(duração + 100);
lcd.clear();
delay(espera);

lcd.setCursor(0, 0);
lcd.print("BYYYY");
B4(duração+300);
delay(espera);
E4(duração+100);
lcd.clear();
delay(espera - 25);
// Espaço
lcd.setCursor(0, 0);
lcd.print("Dont bring me");
lcd.setCursor(0, 1);
lcd.print("down, i pray. ");
E4(duração - 100);
delay(espera - 25);
Gb4(duração- 100);
delay(espera- 25);
G4(duração - 100);
delay(espera - 25);
B4(duração);
delay(espera);
B4(duração);
delay(espera);
A4(duração + 100);
delay(espera - 25);
lcd.clear();
// Espaço
lcd.setCursor(0, 0);
lcd.print("Oh, pretty baaby.");
G4(duração-100);
delay(espera - 25);
Gb4(duração-100);
delay(espera -25);
G4(duração-100);
delay(espera -25);
A4(duração+300);
delay(espera);
d4(duração+100);
delay(espera);
lcd.clear();

// Espaço
lcd.setCursor(0, 0);
lcd.print("Now, that i´ve foundo");
lcd.setCursor(0, 1);
lcd.print("you, stay.");
d4(duração - 100);
delay(espera - 25);
E4(duração - 100);
delay(espera - 25);
Gb4(duração - 100);
delay(espera-25);
A4(duração);
delay(espera);
A4(duração);
delay(espera);
G4(duração+100);
lcd.clear();

lcd.setCursor(0, 0);
lcd.print("AND LET ME");
delay(espera-25);
Gb4(duração-100);
delay(espera-25);
E4(duração-100);
delay(espera-25);
Gb4(duração-100);
delay(espera-25);
lcd.clear();

lcd.setCursor(0, 0);
lcd.print("LOOOVE");
G4(duração+300);
lcd.clear();

delay(espera);
lcd.setCursor(0, 0);
lcd.print("YOOU");
A4(duração+300);
lcd.clear();
delay(espera);

lcd.setCursor(0, 0);
lcd.print("BAAA");
E4(duração+300);
lcd.clear();
delay(espera);

lcd.setCursor(0, 0);
lcd.print("BYYYY");
Gb4(duração+300);
lcd.clear();
delay(espera);

lcd.setCursor(1, 0);
lcd.print("LEET");
G4(duração + 100);
lcd.clear();
delay(espera);

lcd.setCursor(1, 0);
lcd.print("MEEEEE");
E4(duração+100);
lcd.clear();
delay(espera);

lcd.setCursor(1, 0);
lcd.print("LOOOOOVE");
G4(duração+300);
lcd.clear();
delay(espera);

lcd.setCursor(1, 0);
lcd.print("YOOOUUUUUUUUU!!");
A4(duração+300);
delay(espera);
lcd.clear();

delay(4000);


lcd.setCursor(0,0);
lcd.print("Te amo mais que");
lcd.setCursor(0,1);
lcd.print(" tudo minha vida");
delay(4000);
lcd.clear();

lcd.setCursor(1,0);
lcd.print("Feliz 7 meses!!!");
delay(4000);
lcd.clear();

lcd.setCursor(1,0);
lcd.print("Desculpa pelo ");
lcd.setCursor(1,1);
lcd.print("atraso :( ");

delay(4000);
lcd.clear();




}

void loop() {
 
}





// Função para tocar a nota B4 no buzzer
void B4(int duration) {
  tone(buzzerPin, 493.88);
  delay(duration); // Tocando a nota pela duração especificada
  noTone(buzzerPin); // Desligando o som
  
}

// Função para tocar a nota E4 no buzzer
void E4(int duration) {
  tone(buzzerPin, 329.63);
  delay(duration); // Tocando a nota pela duração especificada
  noTone(buzzerPin); // Desligando o som
   
}

// Função para tocar a nota Gb4 (ou G#4) no buzzer
void Gb4(int duration) {
  tone(buzzerPin, 369.99); // Ou 332.23 para G#4
  delay(duration); // Tocando a nota pela duração especificada
  noTone(buzzerPin); // Desligando o som
   
}

// Função para tocar a nota G4 no buzzer
void G4(int duration) {
  tone(buzzerPin, 392.00);
  delay(duration); // Tocando a nota pela duração especificada
  noTone(buzzerPin); // Desligando o som
   
}

// Função para tocar a nota A4 no buzzer
void A4(int duration) {
  tone(buzzerPin, 440.00);
  delay(duration); // Tocando a nota pela duração especificada
  noTone(buzzerPin); // Desligando o som
   
}

// Função para tocar a nota d4 no buzzer
void d4(int duration) {
  tone(buzzerPin, 293.66);
  delay(duration); // Tocando a nota pela duração especificada
  noTone(buzzerPin); // Desligando o som
   
}

// Função para tocar a nota C4 no buzzer
void C4(int duration) {
  tone(buzzerPin, 261.63);
  delay(duration); // Tocando a nota pela duração especificada
  noTone(buzzerPin); // Desligando o som
   
}

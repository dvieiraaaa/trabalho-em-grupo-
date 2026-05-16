#define BOTAO_DO 2
#define BOTAO_RE 3
#define BOTAO_MI 4
#define BOTAO_FA 5

#define BUZZER 8

void setup() {
  pinMode(BOTAO_DO, INPUT_PULLUP);
  pinMode(BOTAO_RE, INPUT_PULLUP);
  pinMode(BOTAO_MI, INPUT_PULLUP);
  pinMode(BOTAO_FA, INPUT_PULLUP);

  pinMode(BUZZER, OUTPUT);
}

void loop() {

  if (digitalRead(BOTAO_DO) == LOW) {
    tone(BUZZER, 262); // DO
  }

  else if (digitalRead(BOTAO_RE) == LOW) {
    tone(BUZZER, 294); // RE
  }

  else if (digitalRead(BOTAO_MI) == LOW) {
    tone(BUZZER, 330); // MI
  }

  else if (digitalRead(BOTAO_FA) == LOW) {
    tone(BUZZER, 349); // FA
  }

  else {
    noTone(BUZZER);
  }
}
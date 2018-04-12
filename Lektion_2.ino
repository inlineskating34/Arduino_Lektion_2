int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  if (switchState == LOW) {
    //il pulsante è premuto
    digitalWrite(3, HIGH); // LED verde
    digitalWrite(4, LOW); // LED rosso
    digitalWrite(5, LOW); // LED rosso
}

else { // il pulsante è premuto
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  delay(250); // aspetta un quarto di secondo
  // cambia gli stati dei LED
  digitalWrite(4 HIGH);
  digitalWrite(5, LOW);
  delay(250); // aspetta un quarto di secondo
  }
} // torna indietro all'inizio del loop



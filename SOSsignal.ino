void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW); //S = three short

  digitalWrite(13, HIGH);
  delay(3000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(3000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(3000);
  digitalWrite(13, LOW); //O = three long

  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW); //S = three short

  delay(5000); //separate individual SOS signals
}

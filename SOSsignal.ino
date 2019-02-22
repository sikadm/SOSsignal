void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW); //S = three short
  delay(500);
  
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW); //O = three long
  delay(500);
  
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW); //S = three short
  delay(500);

  delay(5000); //separate each SOS signal
}

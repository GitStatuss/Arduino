void setup() {
  // put your setup code here, to run once:
  pinMode (D3, OUTPUT);
  pinMode (D6, OUTPUT);
  pinMode (D5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(D3, HIGH);

delay(50);

digitalWrite(D3, LOW);

delay(50);

digitalWrite(D5, HIGH);

delay(50);

digitalWrite(D5, LOW);

delay(50);

digitalWrite(D6, HIGH);

delay(100);

digitalWrite(D6, LOW);

delay(100);
}

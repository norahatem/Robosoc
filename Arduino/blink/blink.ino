int LED = 13;
int LED2 = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(200);
  digitalWrite(LED, LOW);
  delay(200);
  digitalWrite(LED2, HIGH);
  delay(200);
  digitalWrite(LED2, LOW);
  delay(200);

}

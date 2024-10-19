int IRSensor = 13;
int LED = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(IRSensor, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  bool readValue;
  readValue = digitalRead(IRSensor);
  if(!readValue){
    digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
}

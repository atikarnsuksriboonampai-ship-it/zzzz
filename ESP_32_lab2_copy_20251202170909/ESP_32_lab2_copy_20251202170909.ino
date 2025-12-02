int bt = 17 ;

void setup() {
  pinMode(bt,OUTPUT);

}

void loop() {
  digitalWrite(bt,HIGH);
  Serial.println("ON");
  delay(1000);
  digitalWrite(bt,LOW);
  Serial.println("OFF");
  delay(1000);
}
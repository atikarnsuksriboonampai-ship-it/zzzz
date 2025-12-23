int ldr = 36;

void setup()  {
 Serial.begin(74880);


}

void loop() {
  int x = analogRead(ldr);
  Serial.println(x);
  Serial.print("/t");
  int y =map(x,0,947,0,4);
  Serial.println(y);
  delay(500);
}

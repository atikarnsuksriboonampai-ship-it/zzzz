int bt = 17 ;
int wifi =2 ;
int ntp = 12;
int iot =12;


void setup() {
  
  pinMode(bt,OUTPUT);
  pinMode(wifi,OUTPUT);
  pinMode(iot,OUTPUT);
  pinMode(ntp,OUTPUT);
 

}

void loop() {
  
  digitalWrite(bt,LOW);
  delay(100);
  digitalWrite(wifi,HIGH);
  delay(100);
  digitalWrite(iot,HIGH);
  delay(100);
  digitalWrite(ntp,HIGH);
  delay(100);

  digitalWrite(wifi,LOW);
  delay(100);
  digitalWrite(bt,HIGH);
  delay(100);
  digitalWrite(iot,HIGH);
  delay(100);
  digitalWrite(ntp,HIGH);
  delay(100);

  digitalWrite(iot,LOW);
  delay(100);
  digitalWrite(wifi,HIGH);
  delay(100);
  digitalWrite(bt,HIGH);
  delay(100);
  digitalWrite(ntp,HIGH);
  delay(100);

  digitalWrite(ntp,LOW);
  delay(100);
  digitalWrite(wifi,HIGH);
  delay(100);
  digitalWrite(iot,HIGH);
  delay(100);
  digitalWrite(bt,HIGH);
  delay(100);
}
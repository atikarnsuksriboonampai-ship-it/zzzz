int ldr = 36;
int bt = 17 ;
int wifi = 2 ;
int ntp = 15 ;
int iot = 12 ;

void setup() {
  Serial.begin(9600);
  pinMode(bt,OUTPUT);
  pinMode(iot,OUTPUT);
  pinMode(ntp,OUTPUT);
  pinMode(wifi,OUTPUT);

}

void loop() {
  int x = analogRead(ldr);
  int y = map(x ,0 ,1024 ,1 ,4);

  switch (y) {
    case 1 : 
  digitalWrite(bt,HIGH);
  Serial.print("fix => ");
  Serial.println(y);
  delay(1000);
  break;

  case 2 : 
  digitalWrite(bt,HIGH);
  digitalWrite(wifi,HIGH);
  Serial.print("fix => ");
  Serial.println(y);
  delay(1000);
  break;

  case 3 : 
  digitalWrite(bt,HIGH);
  digitalWrite(wifi,HIGH);
  digitalWrite(ntp,HIGH);
  Serial.print("fix => ");
  Serial.println(y);
  delay(1000);
  break;

  case 4 : 
  digitalWrite(bt,HIGH);
  digitalWrite(wifi,HIGH);
  digitalWrite(ntp,HIGH);
  digitalWrite(iot,HIGH);
  Serial.print("fix => ");
  Serial.println(y);
  delay(1000);
  break;

  }
}

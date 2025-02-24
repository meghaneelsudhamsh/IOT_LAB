void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
  Serial.println("Red Light ON");
  delay(7000);

  

  digitalWrite(12,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,HIGH);
  Serial.println("Green Light ON");
  delay(5000);

  digitalWrite(12,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(8,LOW);
  Serial.println("Yellow Light ON");
  delay(2000);

}

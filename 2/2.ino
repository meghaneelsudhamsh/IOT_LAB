int ldr = A0;
int val = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(ldr);
  Serial.print("LDR value is : ");
  Serial.println(val);
  if(val < 300)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
  delay(1000);
}

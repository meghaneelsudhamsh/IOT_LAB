#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

int gl = 2;
int yl = 4;
int rl = 6;
int analogValue = 0;
float voltage = 0;
int ledDelay = 1000;

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  display.clearDisplay();
  Serial.begin(9600);
  pinMode(gl, OUTPUT);
  pinMode(yl, OUTPUT);
  pinMode(rl, OUTPUT);
}

void loop() {
  analogValue = analogRead(A0);
  voltage = (analogValue * 5.0) / 1024.0;
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Battery Voltage : ");
  display.println(" ");
  display.setTextSize(3);
  display.print(" ");
  display.print(voltage, 1);
  display.display();
  delay(2000);
  display.clearDisplay();
  Serial.println(voltage);
  if (voltage >= 1.35) {
    digitalWrite(gl, HIGH);
  } else if (voltage < 1.35 && voltage > 1.2) {
    digitalWrite(yl, HIGH);
  } else if (voltage <= 1.2) {
    digitalWrite(rl, HIGH);
  }

  delay(ledDelay);
  digitalWrite(rl, LOW);
  digitalWrite(yl, LOW);
  digitalWrite(gl, LOW);
}

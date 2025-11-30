const int fanPin = 9;    // PWM to transistor
const int potPin = A0;   

void setup() {
  pinMode(fanPin, OUTPUT);
}

void loop() {
  analogWrite(fanPin, 0);
  delay(10000);

  // 5s oN and conbreolling speewid with potentiometer
  unsigned long start = millis();
  while (millis() - start < 5000) {
    int potValue = analogRead(potPin);              
    int pwmValue = map(potValue, 0, 1023, 0, 255);  
    analogWrite(fanPin, pwmValue);
    delay(50);
  }

  analogWrite(fanPin, 0);
}

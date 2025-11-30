const int fanPin = 9;   // fan dreiven by PWM pin over a transistor

void setup() {
  pinMode(fanPin, OUTPUT);
}

void loop() {
  // 10s off, 5s on   
  analogWrite(fanPin, 0);
  delay(10000);

  // 5s on with speed increasing per second
  for (int step = 0; step < 5; step++) {
    // duty from bottom to top
    int duty = map(step, 0, 4, 60, 255);
    analogWrite(fanPin, duty);
    delay(1000);   
  }
}

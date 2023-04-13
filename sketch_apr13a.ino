#define trigPin 13
#define echoPin 12
#define ledPin1 2
#define ledPin2 3
#define ledPin3 4
#define ledPin4 5
#define ledPin5 6
#define ledPin6 7
#define ledPin7 8
#define ledPin8 9
#define ledPin9 10
#define ledPin10 11

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, cm;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  cm = duration / 58;
  Serial.println(cm);
 
  
  if (cm >= 4 && cm <= 6) {
    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin1, HIGH);
    delay(250);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin3, HIGH);
    delay(250);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin5, HIGH);
    delay(250);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin7, HIGH);
    delay(500);
    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin1, HIGH);
    delay(250);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin3, HIGH);
    delay(250);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin5, HIGH);
    delay(250);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin7, HIGH);
    delay(500);
  } else if (cm >= 10 && cm <= 12) {
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(250);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(250);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin6, HIGH);
    delay(250);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin8, HIGH);
    delay(500);
    digitalWrite(ledPin8, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(250);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin4, HIGH);
    delay(250);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin6, HIGH);
    delay(250);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin8, HIGH);
    delay(500);
  } else {
    for (int i = ledPin1; i <= ledPin10; i++) {
      digitalWrite(i, HIGH);
    }
    delay(500);
    for (int i = ledPin1; i <= ledPin10; i++) {
      digitalWrite(i, LOW);
    }
    delay(500);
  }
}

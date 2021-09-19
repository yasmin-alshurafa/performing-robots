const int in1Pin = 11;
const int in2Pin = 10;
const int in3Pin = 9;
const int in4Pin = 8;

void setup() {
  pinMode (in1Pin, OUTPUT);
  pinMode (in2Pin, OUTPUT);
  pinMode (in3Pin, OUTPUT);
  pinMode (in4Pin, OUTPUT);
}

void loop() {
  digitalWrite (in4Pin, LOW);
  analogWrite (in3Pin, 50);
  digitalWrite (in1Pin, LOW);
  analogWrite (in2Pin, 50);
  delay (3000);
  digitalWrite (in4Pin, HIGH);
  analogWrite (in3Pin, 256-50);
  digitalWrite (in1Pin, HIGH);
  analogWrite (in2Pin, 256-50);
  delay (3000);
  digitalWrite (in4Pin, LOW);
  analogWrite (in3Pin, 100);
  digitalWrite (in1Pin, LOW);
  analogWrite (in2Pin, 100);
  delay (3000);
  digitalWrite (in4Pin, HIGH);
  analogWrite (in3Pin, 256-100);
  digitalWrite (in1Pin, HIGH);
  analogWrite (in2Pin, 256-100);
  delay (3000);
}

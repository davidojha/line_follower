// Line Follower Robot Code
#define leftSensor A0    // IR sensor on the left
#define rightSensor A1   // IR sensor on the right
#define leftMotor1 3     // Left motor control pin 1
#define leftMotor2 4     // Left motor control pin 2
#define rightMotor1 5    // Right motor control pin 1
#define rightMotor2 6    // Right motor control pin 2

void setup() {
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  pinMode(leftMotor1, OUTPUT);
  pinMode(leftMotor2, OUTPUT);
  pinMode(rightMotor1, OUTPUT);
  pinMode(rightMotor2, OUTPUT);
}

void loop() {
  int leftState = digitalRead(leftSensor);  // Read left IR sensor
  int rightState = digitalRead(rightSensor); // Read right IR sensor

  if (leftState == LOW && rightState == LOW) {
    // Both sensors on black line: Move forward
    forward();
  } else if (leftState == HIGH && rightState == LOW) {
    // Left sensor off the line: Turn right
    turnRight();
  } else if (leftState == LOW && rightState == HIGH) {
    // Right sensor off the line: Turn left
    turnLeft();
  } else {
    // Both sensors off the line: Stop
    stopMotors();
  }
}

void forward() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void turnRight() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, LOW);
}

void turnLeft() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void stopMotors() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, LOW);
}

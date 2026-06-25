#include <Keypad.h>
#include <Stepper.h>

#define STEPS 700

Stepper motor1(STEPS, 9, 11, 10, 12);
Stepper motor2(STEPS, 4, 6, 5, 7);

const byte ROWS = 4;
const byte COLS = 3;

char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[ROWS] = {A0, A1, A2, A3};
byte colPins[COLS] = {A4, A5, 8};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

int currentPositionSteps = 0;

void setup() {
  Serial.begin(9600);
  motor1.setSpeed(60);
  motor2.setSpeed(60);
  Serial.println("System Ready");
}

void moveToAngle(int targetAngle) {
  int targetSteps = (targetAngle / 360.0) * STEPS;
  int stepsToMove = targetSteps - currentPositionSteps;

  if (stepsToMove != 0) {
    motor1.step(stepsToMove);
    motor2.step(stepsToMove);
    currentPositionSteps = targetSteps;
  }
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    if (key == '1')
      moveToAngle(90);
    else if (key == '2')
      moveToAngle(180);
    else if (key == '3')
      moveToAngle(270);
    else if (key == '0')
      moveToAngle(0);
    else if (key == '*')
      moveToAngle(360);
  }
}



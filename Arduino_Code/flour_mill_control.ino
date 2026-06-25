#include <Keypad.h>
#include <Stepper.h>

#define STEPS 700

// Stepper Motor Pins
Stepper motor(STEPS, 9, 11, 10, 12);

// Keypad Setup
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
  motor.setSpeed(60);
  Serial.println("Flour Mill Control System Ready");
}

void moveToAngle(int targetAngle) {

  int targetSteps = (targetAngle * STEPS) / 360;
  int stepsToMove = targetSteps - currentPositionSteps;

  if (stepsToMove != 0) {
    Serial.print("Moving to Angle: ");
    Serial.println(targetAngle);

    motor.step(stepsToMove);

    currentPositionSteps = targetSteps;
  }
}

void loop() {

  char key = keypad.getKey();

  if (key) {

    switch(key) {

      case '1':
        moveToAngle(90);     // Low Speed
        break;

      case '2':
        moveToAngle(180);    // Medium Speed
        break;

      case '3':
        moveToAngle(270);    // High Speed
        break;

      case '0':
        moveToAngle(0);      // Stop / Minimum Speed
        break;

      case '*':
        moveToAngle(360);    // Maximum Speed
        break;
    }
  }
}


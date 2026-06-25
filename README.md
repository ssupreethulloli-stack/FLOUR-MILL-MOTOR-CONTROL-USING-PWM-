# Arduino-Based Automated Flour Mill Speed Control System Using PWM Technique

## Overview

This project presents an Arduino-based automated flour mill speed control system. The system uses a keypad for user input, an Arduino Uno for processing, and a stepper motor mechanically coupled to a potentiometer to adjust the PWM duty cycle. The PWM circuit controls the speed of the DC motor that drives the flour mill, enabling precise and user-friendly speed regulation.

---

## Project Prototype

![Project Prototype](project.jpg)

---

## Features

- Digital speed control using Arduino Uno
- Keypad-based user input
- Stepper motor controlled potentiometer adjustment
- PWM-based DC motor speed regulation
- Low-cost and easy-to-implement design
- Suitable for small-scale flour milling applications

---

## Hardware Components

| Component | Quantity |
|------------|------------|
| Arduino Uno | 1 |
| 4×4 Keypad | 1 |
| Stepper Motor | 1 |
| Stepper Motor Driver | 1 |
| Potentiometer | 1 |
| PWM Control Circuit (555 Timer) | 1 |
| DC Motor | 1 |
| Gear Mechanism | 1 Set |
| Battery/Power Supply | 1 |
| Connecting Wires | As Required |

---

## System Architecture

```text
             +----------------+
             |    Keypad      |
             +--------+-------+
                      |
                      v
             +----------------+
             |  Arduino Uno   |
             +--------+-------+
                      |
                      v
             +----------------+
             | Stepper Motor  |
             +--------+-------+
                      |
                      v
             +----------------+
             | Potentiometer  |
             +--------+-------+
                      |
                      v
             +----------------+
             | PWM Circuit    |
             +--------+-------+
                      |
                      v
             +----------------+
             |   DC Motor     |
             +--------+-------+
                      |
                      v
             +----------------+
             |  Flour Mill    |
             +----------------+
```

---

## Working Principle

1. The user enters a speed level using the keypad.
2. Arduino Uno reads the keypad input.
3. Based on the selected speed, Arduino rotates the stepper motor.
4. The stepper motor shaft is mechanically coupled to a potentiometer.
5. Rotation of the potentiometer changes the PWM duty cycle.
6. The PWM circuit regulates the voltage supplied to the DC motor.
7. The DC motor speed changes accordingly and drives the flour mill.

---

## Advantages

- Accurate speed control
- Easy user interface
- Reduced power consumption
- Improved motor efficiency
- Low maintenance cost
- Expandable for IoT applications

---

## Applications

- Flour milling machines
- Grain processing units
- Small industrial automation systems
- Educational and research projects
- Motor speed control applications

---

## Future Scope

- IoT-based remote monitoring
- Mobile application control
- Automatic load sensing
- AI-based speed optimization
- LCD/OLED display integration
- Real-time performance monitoring

---

## Software Used

- Arduino IDE
- Embedded C/C++

---

## Author

**Supreet Hulloli**  
Electrical and Electronics Engineering (EEE)

---

## License

This project is developed for educational and research purposes.

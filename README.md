# Button LED Control - Arduino Project

This project uses an Arduino UNO to control 3 LEDs with 3 push buttons.
Each button turns on a corresponding LED using digital pins.

## 🔧 Components Used
- Arduino UNO
- 3x LEDs
- 3x Push Buttons
- 3x 220Ω resistors (for LEDs)
- 3x 10kΩ resistors (pull-down for buttons)
- Breadboard & Jumper Wires

## 🔌 Circuit
Each button is connected with a 10kΩ pull-down resistor to avoid floating input.
Each LED is connected with a 220Ω resistor to limit current.

> Check the included circuit diagram for wiring.
> 

## 💡 Pin Configuration

<img width="1440" height="729" alt="Fantabulous Snaget" src="https://github.com/user-attachments/assets/ad73b53a-fe12-49f4-9292-591c5b1fa6cd" />


## 🧠 Code

const int led1 = 13;
const int led2 = 12;
const int led3 = 11;


const int btn1 = 2;
const int btn2 = 3;
const int btn3 = 4;


void setup()
{
  pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);


    pinMode(btn1,INPUT);
      pinMode(btn2,INPUT);
    pinMode(btn3,INPUT);


}

void loop()
{
  int state1 = digitalRead(btn1);
    int state2 = digitalRead(btn2);
    int state3 = digitalRead(btn3);


  digitalWrite(led1, state1);
    digitalWrite(led2, state2);
    digitalWrite(led3, state3);


  
}
## 📷 Preview

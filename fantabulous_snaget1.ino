// C++ code
//

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
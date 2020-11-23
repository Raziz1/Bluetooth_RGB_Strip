//www.elegoo.com
//2016.09.19

int R = 11; //Define 11 pin for RED
int G = 10; //Define 10 pin for Green
int B = 9; //Define 9 pin for Blue
volatile int state = LOW;//The initial state of the function is defined as a low level
char getstr;    //Defines a function that receives the Bluetooth character
// Interval is how long we wait
// add const if this should never change
int interval = 2000;
// Tracks the time since last event fired
unsigned long previousMillis = 0;
bool switchColor = false;//Call the switch color function if this boolean is true
int currentColor = 0;//Keep track of the current color we are on in the switch and function color
bool fadeColor = false;//Call the fade color function if this boolean is true

/*====================Setup Function====================*/
void setup() {
  //Define the pins as output pins
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  Serial.begin(9600);
  /* This works
    digitalWrite(R, 0);
    delay(1000);
    digitalWrite(R, 1);
  */

}
/*Control LED sub function*/
void stateChange(char inp)
{
  state = !state;
  if (inp == 'R') {
    digitalWrite(R, state);
  } else if (inp == 'G') {
    digitalWrite(G, state);
  } else if (inp == 'B') {
    digitalWrite(B, state);
  } else if (inp == 'S') {
    switchColor = !switchColor;
  } else if (inp == 'O') {
    switchColor = false;
    fadeColor = false;
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
  } else if (inp == 'F') {
    fadeColor = !fadeColor;
  }
  Serial.print(inp);
  Serial.print(state);
}

/*Change Color Function*/
void changeColor() {
  currentColor += 1;
  if (currentColor == 3) {
    currentColor = 0;
  }

  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);


  if (currentColor == 0) {
    digitalWrite(R, LOW);
  } else if (currentColor == 1) {
    digitalWrite(G, LOW);
  } else if (currentColor == 2) {
    digitalWrite(B, LOW);
  }
}

/* Fade Color Function*/
void fade() {
  currentColor += 1;
  if (currentColor == 3) {
    currentColor = 0;
  }

  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(B, HIGH);


  if (currentColor == 0) {
    for (int i = 255; i > 0; i--) {
      analogWrite(R, i);
      delay(30);
    }
  } else if (currentColor == 1) {
    for (int i = 255; i > 0; i--) {
      analogWrite(G, i);
      delay(30);

    }
  } else if (currentColor == 2) {
    for (int i = 255; i > 0; i--) {
      analogWrite(B, i);
      delay(30);

    }
  }
}

/*====================Main Loop====================*/
void loop() {
  // Get snapshot of time
  unsigned long currentMillis = millis();

  // How much time has passed, accounting for rollover with subtraction!
  if ((unsigned long)(currentMillis - previousMillis) >= interval) {
    previousMillis = currentMillis;
  }

  getstr = Serial.read(); //The Bluetooth serial port to receive the data in the function
  if (getstr == 'R' || getstr == 'G' || getstr == 'B' || getstr == 'F' || getstr == 'O' || getstr == 'S') {
    stateChange(getstr);
  }

  //if switch color or fade is detected call that function
  if (switchColor == true) {
    changeColor();
  }
  if (fadeColor == true) {
    fade();
  }
}

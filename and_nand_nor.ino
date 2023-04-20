int pinOut = 3;
int pinA = 1;
int pinB = 2;

void setup()
{
  pinMode(pinOut, OUTPUT);
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
}

void loop()
{
  boolean pinAState = digitalRead(pinA);
  boolean pinBState = digitalRead(pinB);
  boolean pinOutState;
  // Vj4.3 - AND
  //pinOutState = pinAState & pinBState;
  
  // Vj5.3 - NI
  //pinOutState = !(pinAState & pinBState);
  
  // Vj5.5 - NILI
  pinOutState = !(pinAState | pinBState);
  digitalWrite(pinOut, pinOutState);
}
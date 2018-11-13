int switchPin = 8;
int ledPin = 11;
bool lastButton = LOW;
bool currentButton = LOW;
int ledOn = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

boolean dabounce(bool last){
  bool current = digitalRead(switchPin);
  // wait to set up
  if(last != current){
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}

void loop() {
  // put your main code here, to run repeatedly:
  currentButton = dabounce(lastButton);
  
  if(lastButton == LOW && currentButton == HIGH){
    ledOn = (ledOn + 15) % 255;
  }


    lastButton = currentButton;
    analogWrite(ledPin, ledOn);
}

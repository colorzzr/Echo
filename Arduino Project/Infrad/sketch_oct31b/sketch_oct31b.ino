int sensePin = 0;
int IRSPin = 1;
int waringLedPin = 8;
int ledPin = 9;


void setup() {
  // put your setup code here, to run once:
  analogReference(DEFAULT);

  //open the functional light
  digitalWrite(10, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
//  Serial.println(analogRead(IRSPin));
//  delay(500);
// ----------------------------------------

  int val = analogRead(sensePin);
  int IRval = analogRead(IRSPin);

  // if there is too dark
  if(val < 400) {
    digitalWrite(ledPin, HIGH);

    // about 25 cm active warning
    if(IRval > 130) digitalWrite(waringLedPin, HIGH);
    else digitalWrite(waringLedPin, LOW);
  }
  // if sunny
  else {
    digitalWrite(ledPin, LOW);
    
    // about 50 cm active warning
    if(IRval > 300) digitalWrite(waringLedPin, HIGH);
    else digitalWrite(waringLedPin, LOW);
  }
  
}

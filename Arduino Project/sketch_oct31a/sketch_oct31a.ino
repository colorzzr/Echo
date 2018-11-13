int sensePin = 0;
int ledPin = 13;


void setup() {
  // put your setup code here, to run once:

  analogReference(DEFAULT);

  pinMode(ledPin, OUTPUT);

//  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(sensePin);

//  if(val > 400) digitalWrite(ledPin, HIGH);
//  else digitalWrite(ledPin, LOW);

  val = constrain(val, 200, 800);
  int ledLevel = map(val, 200, 800, 0, 255);

//  analogWrite(ledPin, ledLevel);
//  
//Serial.println(ledLevel);
}

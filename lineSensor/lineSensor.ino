int ledPin = 9;
int line = 2;
int level = LOW;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(line, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  state = digitalRead(line);
  if(state == HIGH)
  {
    digitalWrite(ledPin,HIGH);  
    level = HIGH;  
  }else
  {
    digitalWrite(ledPin,LOW);  
    level = LOW;
  }
}

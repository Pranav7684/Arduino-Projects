int ledPin = 13;
int inputPin = 2;
int motion = LOW;
int stat = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(inputPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  stat = digitalRead(inputPin);
  if(stst == HIGH);
  {
    digitalWrite(ledPin,HIGH);
    motion = HIGH;
  }else{
    digitalWrite(ledPin,LOW);
    motion = LOW;
  }
}
int  ledPin = 13;
int  inputPin = 8;
int  touch = LOW;
int  stat = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(inputPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  stat = digitalRead(inputPin);
  if(stat == HIGH)
  {
    digitalWrite(ledPin,HIGH);
    touch = HIGH;

  }else{
    digitalWrite(ledPin,LOW);
    touch = LOW;
  }
}

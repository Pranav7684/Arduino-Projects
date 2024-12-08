int  ledPin = 9;
int  inputPin = 2;
int  object = LOW;
int  stat = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(inputPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  stat = digitalRead(inputPin);
  if(stat == HIGH);
  {
    digitalWrite(ledPin,HIGH);
    object = HIGH;

  }else{
    digitalWrite(ledPin,LOW);
    object = LOW;
  }
}

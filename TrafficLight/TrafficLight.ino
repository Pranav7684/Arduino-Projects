int red = 4;
int yellow = 3;
int green = 2;
int Delay = 10000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  delay(Delay);
  digitalWrite(yellow,HIGH);
  delay(2000);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(Delay);
  digitalWrite(yellow,HIGH);
  delay(2000);
  digitalWrite(green,LOW);
  digitalWrite(yellow,LOW);
}

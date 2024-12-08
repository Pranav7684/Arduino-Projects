int green = 2;
int red = 3;
int yellow = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<=10; i++)
  {
    digitalWrite(green, HIGH);
    digitalWrite(red, HIGH);
    delay(100);
    digitalWrite(green, LOW);
    digitalWrite(red, Low);
    delay(100);
  }

    for(int i=0; i<=10; i++)
  {
    digitalWrite(green, HIGH);
    digitalWrite(yellow, HIGH);
    delay(100);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    delay(100);
  }

      for(int i=0; i<=10; i++)
  {
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    delay(100);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    delay(100);
  }
}

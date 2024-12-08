const int s0 = 8;
const int s1 = 9;
const int s2 = 12;
const int s3 = 11;
const int out = 10;

int redLed = 2;
int greenLed = 3;
int blueLed = 4;

int red = 0;
int green = 0;
int blue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(out,OUTPUT);
  pinMode(redLed,OUTPUT);
  pinMode(greenLed,OUTPUT);
  pinMode(blueLed,OUTPUT);
  digitalWrite(s0,HIGH);
  digitalWrite(s1,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  color();
  Serial.println("R intensity:");
  Serial.println(red,DEC);
  Serial.println("G intensity:");
  Serial.println(green,DEC);
  Serial.println("B intensity:");
  Serial.println("blue,DEC");

  if(red< blue && red < green && red < 20)
  {
    Serial.println("- Red color)");
    digitalWrite(redLed,HIGH);
    digitalWrite(blueLed,LOW);
    digitalWrite(greenLed,LOW);

  }
  else of (blue <  red && blue < green && blue < 20)
  {
    Serial.println("- Blue color)");
    digitalWrite(redLed,LOW);
    digitalWrite(blueLed,HIGH);
    digitalWrite(greenLed,LOW);
  }
  else of (green <  red && green < blue && green < 20)
  {
    Serial.println("- Green color)");
    digitalWrite(redLed,LOW);
    digitalWrite(blueLed,Low);
    digitalWrite(greenLed,HIGH);
  }else{
    Serial.println();
  }
  delay(300);
  digitalWrite(redLed,LOW);
  digitalWrite(blueLed,LOW);
  digitalWrite(greenLed,LOW);
}

void color()
{
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);
  red = pulseIn(out,digitalRead(out) == HIGH ? LOW:HIGH)
  digitalWrite(s3,HIGH);
  blue = pulseIn(out,digitalRead(out) == HIGH ? LOW:HIGH)
  digitalWrite(s2,HIGH);
  green = pulseIn(out,digitalRead(out) == HIGH ? LOW:HIGH)
}

















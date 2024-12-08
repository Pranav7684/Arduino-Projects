#define trigPin 13
#define echoPiin 12
#define ledPin 11

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
  digitalWrite(trigPin,LOW);
  delayMicroscale(2);
  digitalWrite(trigPin,HIGH);
  delayMicroscale(10);
  duration = pulseIn(echoPin,HIGH);

  distance =  (duration/2) / 29.1;

  if(distance  < 10) 
  {
    digitalWrite(ledPin,HIGH);

  }else{
    digitalWrite(ledPin,LOW);

  }
  Serial.print(distance);
  Serial.println("cm");
  delay(1500);
}

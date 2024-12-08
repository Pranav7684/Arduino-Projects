// Written by Rommelmith
#define BLYNK_TEMPLATE_ID "TMPL3Y49aqVbI"
#define BLYNK_TEMPLATE_NAME "plant monitering"
#define BLYNK_AUTH_TOKEN "SCRBLi3gnuvZh2KXQ2KpbtGNvfC0Ewf2"

#define BLYNK_PRINT Serial
#include <OneWire.h>
#include <Servo.h>
Servo servo;
#include <SPI.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS D2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

char auth[] = "SCRBLi3gnuvZh2KXQ2KpbtGNvfC0Ewf2";
char ssid[] = "Pranav@0917";//wifi name
char pass[] = "pranav123";//wifi password
#define DHTPIN 3
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
SimpleTimer timer;
void sendSensor()
{
float h = dht.readHumidity();
float t = dht.readTemperature();

if (isnan(h) || isnan(t)) {
//Serial.println(“Failed to read from DHT sensor!”);
return;
}

Blynk.virtualWrite(V5, h); //V5 is for Humidity
Blynk.virtualWrite(V6, t); //V6 is for Temperature
}
void setup()
{
  pinMode(D0,OUTPUT);
servo.attach(15);
servo.write(0);
delay(500);
Serial.begin(9600);
dht.begin();

timer.setInterval(1000L, sendSensor);
Blynk.begin(auth, ssid, pass);
sensors.begin();
}
int sensor=0;
int output=0;
void sendTemps()
{
sensor=analogRead(A0);
output=(145-map(sensor,0,1023,0,100)); //in place 145 there is 100(it change with the change in sensor)
delay(1000);
sensors.requestTemperatures();
float temp = sensors.getTempCByIndex(0);
Serial.println(temp);
//Serial.print(“moisture = “);
Serial.print(output);
//Serial.println(“%”);
Blynk.virtualWrite(V1, temp);
Blynk.virtualWrite(V2,output);
delay(1000);
}
void loop()
{
Blynk.run();
timer.run();
sendTemps();
float h = dht.readHumidity();
float t = dht.readTemperature();
if (h==60)
{
  servo.write(90);
}
else{
  servo.write(0);
}
}

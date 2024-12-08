//Tech Trends Shameer
//Control Water Pump Using Blynk 2.0
#define BLYNK_TEMPLATE_ID "TMPL3JGmRkXZ6"
#define BLYNK_TEMPLATE_NAME "water pump"
#define BLYNK_AUTH_TOKEN "8zPL9Jt8lZ8may1bot3753i0z_Ca_2n9"


#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h> 
 
#include <BlynkSimpleEsp8266.h>
 

char auth[] = "8zPL9Jt8lZ8may1bot3753i0z_Ca_2n9";

char ssid[] = "Pranav Home";  // Enter your wifi name
char pass[] = "pranav123";  // Enter your wifi password

int relaypin = D5;
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(relaypin,OUTPUT);
 
}

void loop()
{
  Blynk.run(); 
 }

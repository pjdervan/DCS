#include <Adafruit_BME280.h>

#include <Adafruit_SHT31.h>

/*
 This is code to control 4 to 16 channel 5V Relay module using Arduino * watch the video on how to use 4 to unlimited Relay channels https://youtu.be/Wbm3MCMgM_s */
/*
 * This code is written by Ahmad Shamshiri for Robojax.com // Written Mar 26, 2018 at 12:14 in Ajax, Ontario, Canada */
int ch = 2; //number of relays you got
int relay[]={3,10}; //Arduino pin numbers. the same number of relay should be defined here as input pins
int wait = 2000; // delay time
int i = 0;


void setup()
{
 Serial.begin(9600); // prepare Serial monitor
 Serial.println("Setup START");
// set pins as output

  

  Serial.println("Robojax 4 Relay Test");
  Serial.println("Setup END");
} 


void loop()
{
for(i=0; i <=ch; i++) { 
    pinMode(relay[i], OUTPUT);// sent i(th) pin as output
    digitalWrite(relay[i], HIGH);// Turn the relay OFF 
    Serial.println(i);
    Serial.println("ON");
    delay(5000);
      pinMode(relay[i], OUTPUT);// sent i(th) pin as output
    digitalWrite(relay[i], LOW);// Turn the relay OFF 
    Serial.println(i);
    Serial.println("OFF");
    delay(2000);
  
  }
}
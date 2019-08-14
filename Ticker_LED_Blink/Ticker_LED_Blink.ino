#include <ESP8266WiFi.h>
#include <Ticker.h>  //Ticker Library
 
Ticker blinker;
 
#define LED D1  //On board LED
 
//=======================================================================
void changeState()
{
  digitalWrite(LED, !(digitalRead(LED)));  //Invert Current State of LED  
}
//=======================================================================
//                               Setup
//=======================================================================
void setup()
{
    Serial.begin(9600);
    Serial.println("");
 
    pinMode(LED,OUTPUT);
 
    //Initialize Ticker every 0.5s
    blinker.attach(0.25, changeState); //Use <strong>attach_ms</strong> if you need time in ms
}
//=======================================================================
//                MAIN LOOP
//=======================================================================
void loop()
{
}

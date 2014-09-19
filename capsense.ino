#include <CapacitiveSensor.h>

/*
 * CapitiveSense Library Demo Sketch
 * see http://playground.arduino.cc/Main/CapacitiveSensor
 * 
 * Modifieed version for Schmiede
 * 1 M Ohm resistor used
 * 
 */

// 10 megohm resistor between pins 4 & 8, 
// pin 8 is sensor pin, add wire, foil
CapacitiveSensor   cs_4_8 = CapacitiveSensor(4,8);        
// If we are over 9000 trigger the bang sound and animation
int LIMIT = 9000; 

void setup()                    
{
   Serial.begin(9600);
}

void loop()                    
{
    long start = millis();
    long force =  cs_4_8.capacitiveSensor(1000);
// IF WE ARE OVER 9000!!!!
    Serial.println((force>LIMIT)?1:0); 
// Uncomment this to get the real values for recalibration
//    Serial.println(total3);               
    delay(10);                             
}

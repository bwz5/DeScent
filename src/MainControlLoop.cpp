#include "MainControlLoop.h"
#include "sfr.h"

void MainControlLoop::execute(){
    //Will store the current sensor's value that is being read
    float value; 

    // Print the Temperature Monitor Values
    if (tempMonitor.checkInitialization()){ 
        tempMonitor.execute(); 

        Serial.println("Temperature Monitor Values: "); 

        sfr::BME280::altitude->getValue(&value); 
        Serial.print("Altitude: "); 
        Serial.println(value);

        sfr::BME280::temp_c->getValue(&value); 
        Serial.print("Temperature in Celsius "); 
        Serial.println(value);

        sfr::BME280::humidity->getValue(&value); 
        Serial.print("Humidity: "); 
        Serial.println(value);

        sfr::BME280::pressure->getValue(&value); 
        Serial.print("Pressure from Sea Level: "); 
        Serial.println(value);
        
    } else {
        Serial.print("Temperature Sensor not Initialized"); 
    }
}
#include "TempMonitor.h"
#include "sfr.h"

TempMonitor::TempMonitor(){

    Wire.begin();

    // If that status is false, then there was an error. 
    unsigned status = bme.begin();     
    if (!status){
        Serial.print("Can not find the Temperature sensor"); 
    } else {
        initialized = true; 
        Serial.print("Temperature Sensor Initialized");
    }
}

void TempMonitor::execute(){
    // 1013.25 is the Sea Level pressure 
    // sfr::BME280::altitude->setValue( bme.readAltitude(1013.25)); 
    // sfr::BME280::humidity->setValue(bme.readHumidity()); 
    // Divide by 100. to get the correct reading
    sfr::BME280::pressure->setValue(bme.readPressure() / 100.0F); 
    sfr::BME280::temp_c->setValue(bme.readTemperature()); 
}

bool TempMonitor::checkInitialization(){
    return initialized; 
}
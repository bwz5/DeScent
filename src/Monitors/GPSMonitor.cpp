#include <SPI.h>
#include "GPSMonitor.h"
#include "sfr.h"

void GPSMonitor::execute(){
    sfr::GPS::longitude->setValue(gps.getLongitude()); 
    sfr::GPS::latitude->setValue(gps.getLatitude()); 
    //sfr::GPS::altitude->setValue(gps.getAltitude());
}

GPSMonitor::GPSMonitor(){
    SPI.begin();

    while (1) {
        if (gps.begin(GPSCS) == false){
            Serial.println("GPS not initialized, retrying..."); 
        } else {
            Serial.println("GPS Sensor is initialized"); 
            initialized = true; 
            break; 
        }
    }
}

bool GPSMonitor::checkInitialization(){
    return initialized;
}
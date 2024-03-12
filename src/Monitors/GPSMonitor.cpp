
#include "GPSMonitor.h"
#include "sfr.h"

void GPSMonitor::execute(){
    while (ss.available()){
        gps.encode(ss.read());
    }
    sfr::GPS::longitude->setValue(gps.location.lng()); 
    sfr::GPS::latitude->setValue(gps.location.lat()); 
    sfr::GPS::altitude->setValue(gps.altitude.meters());
}

GPSMonitor::GPSMonitor(){
    ss.begin(9600); 
}

bool GPSMonitor::checkInitialization(){
    return initialized;
}
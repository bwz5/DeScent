#ifndef TEMP_MONITOR_H
#define TEMP_MONITOR_H

#include <Adafruit_BME280.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

class TempMonitor {
    private:
        // If a sensor has not been initialized, then do not print any of its values
        bool initialized; 

        Adafruit_BME280 bme; 
    public: 
        /**
         * Begin reading from the sensor
        */
        void execute(); 
        /**
         * Initialize the I2C Protocol
        */
        TempMonitor(); 
        /**
         * Checks if the sensor has been initialized
        */
       bool checkInitialization(); 
}; 

#endif
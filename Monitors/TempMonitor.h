#pragma once 

#include <Adafruit_BME280.h>

class TempMonitor {
    private:
        bool initialized = false; 
    public: 
        /**
         * Begin reading from the sensor
        */
        void execute(); 
        /**
         * Initialize the I2C Protocol
        */
        TempMonitor(); 
}; 
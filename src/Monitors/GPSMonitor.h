#include <TinyGPSPlus.h>
#include <SoftwareSerial.h>


SoftwareSerial ss(0x00,0x01); 

class GPSMonitor {
    private:
        bool initialized = false; 
        TinyGPSPlus gps; 

    public: 
        /**
         * Begin reading from the sensor
        */
        void execute(); 
        /**
         * Initialize the SPI Protocol
        */
        GPSMonitor(); 
        /**
         * Checks if the sensor has been initialized
        */
       bool checkInitialization(); 
}; 
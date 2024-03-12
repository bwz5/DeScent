

#define GPSCS 1// the Chip select pin

class GPSMonitor {
    private:
        bool initialized = false; 
        
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
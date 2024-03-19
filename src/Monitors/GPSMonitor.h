#include <TinyGPSPlus.h>
#include <SoftwareSerial.h>

const int RxPin = 0x00; 
const int TxPin = 0x01; 

class GPSMonitor{
    private:
        bool initialized = false; 
        TinyGPSPlus gps; 
        SoftwareSerial ss; 

    public: 
        /*Begin reading from the sensor*/
        void execute(); 
        /* Initialize SoftwareSerial */
        GPSMonitor() ; 
        /*Checks if the sensor has been initialized */
       bool checkInitialization(); 
}; 
# pragma once
#include <Adafruit_BNO08x.h>

class IMUMonitor{
    private:
    bool intialization = false;

    Adafruit_BNO08x sensor; 
    public:

        void exceute();

        IMUMonitor();
        
        bool intialized(void); 

        void reports(void); 
}; 

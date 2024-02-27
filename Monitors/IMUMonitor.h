# pragma once
#include "../lib/Adafruit_BNO08x/Adafruit_BNO08x/src/Adafruit_BNO08x.h" 
#include "../lib/Adafruit_BNO08x/Adafruit_BNO08x/src/sh2.h" 

class IMUMontior{
    private:
    bool intialization = false;
    Adafruit_BNO08x sensor; 
    public:

        void exceute();

        IMUMontiror();
        
        bool intialized(); 
}

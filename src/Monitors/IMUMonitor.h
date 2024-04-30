#ifndef IMU_MONITOR_H
#define IMU_MONITOR_H

#include <SparkFun_BNO080_Arduino_Library.h>

class IMUMonitor{
    private:

    // Variable to verify that the monitor was set and initializated
    bool initialization;

    //State variable to hold the current event of the IMU
    BNO080 sensor; 
    public:

        /*
            Main Function that polls for most recent
            sensor events and saves newest data from 
            these events
        */
        void exceute();

        /*
            State Construtor for IMU:
            Boots up IMU
            Sets initilazation 
            Begins recordings for :
            Accelerometer 
            Gryoscope
        */
        IMUMonitor();
        
        // Returns initialization state
        bool intialized(void); 

        //Helper Function to start sensor recordings 
        void reports(void); 
}; 

#endif
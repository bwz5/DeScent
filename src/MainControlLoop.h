#ifndef MAIN_CONTROL_LOOP_H
#define MAIN_CONTROL_LOOP_H

/* MONITOR INCLUDE */
#include "Monitors/TempMonitor.h"
#include "Monitors/IMUMonitor.h"

class MainControlLoop {
    private:

    #ifdef TEMP_TEST
    TempMonitor tempMonitor;
    #endif 

    #ifdef IMU_TEST
    IMUMonitor imuMonitor;
    #endif 

    public:
    
    /*Executes the loop that will read from monitors, update sfr, and print values*/
   void execute(); 

   MainControlLoop();
}; 

#endif 
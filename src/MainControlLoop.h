#include "Monitors/TempMonitor.h"
#include "Monitors/IMUMonitor.h"
#include "Monitors/GPSMonitor.h"
#include "LORAT.h"

class MainControlLoop {
    private:
    TempMonitor tempMonitor;
    IMUMonitor  imuMonitor; 
    GPSMonitor gpsMonitor; 
    LORA    loraTransmitter;
    public:
    /**
     * Executes the loop that will read from monitors, update sfr, and print values
    */
   void execute(); 
}; 
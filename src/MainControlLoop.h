#include "Monitors/TempMonitor.h"
#include "Monitors/IMUMonitor.h"
#include "Monitors/GPSMonitor.h"

class MainControlLoop {
    private:
    TempMonitor tempMonitor;
    IMUMonitor  imuMonitor; 
    // GPSMonitor gpsMonitor; 
    public:
    /**
     * Executes the loop that will read from monitors, update sfr, and print values
    */
   void execute(); 
}; 
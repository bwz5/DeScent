#include "../Monitors/TempMonitor.h"
#include "../Monitors/IMUMonitor.h"

class MainControlLoop {
    private:
    TempMonitor tempMonitor;
    IMUMontior  imuMonitor; 
    public:
    /**
     * Executes the loop that will read from monitors, update sfr, and print values
    */
   void execute(); 
}; 
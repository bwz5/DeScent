#include "../Monitors/TempMonitor.h"

class MainControlLoop {
    private:
    TempMonitor tempMonitor; 
    public:
    /**
     * Executes the loop that will read from monitors, update sfr, and print values
    */
   void execute(); 
}; 
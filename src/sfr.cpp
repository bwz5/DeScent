#include "sfr.h"

/**
 * The state field registry, where each sensor will have its values updated
*/
namespace sfr {
    /**
     * Contains the states for the BME280 Humidity and Temperature Sensor
    */
    namespace BME280 { 
        SensorReading *temp_c   = new SensorReading(); 
        SensorReading *pressure = new SensorReading(); 
        SensorReading *altitude = new SensorReading(); 
        SensorReading *humidity = new SensorReading(); 
    }; 
    /**
     * Contains the states for the MAX-M10S-00B GPS 
    */
    namespace GPS {
        SensorReading *latitude = new SensorReading(); 
        SensorReading *longitude = new SensorReading(); 
        SensorReading *altitude = new SensorReading(); 

    }
    /**
     * Contains the states for the SX1276 LoRa
    */
    namespace SX1276 {

    }; 
    /**
     * Contains the states for the BNO085 IMU
    */
    namespace BNO085{
         SensorReading *Acc_x  = new SensorReading();
         SensorReading *Acc_y  = new SensorReading();
         SensorReading *Acc_z  = new SensorReading();
         SensorReading *Gryo_x = new SensorReading(); 
         SensorReading *Gryo_y = new SensorReading(); 
         SensorReading *Gryo_z = new SensorReading(); 
        //  SensorReading *Magn_x = new SensorReading(); 
        //  SensorReading *Magn_y = new SensorReading(); 
        //  SensorReading *Magn_z = new SensorReading(); 
        
    }; 
}; 

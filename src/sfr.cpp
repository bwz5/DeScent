#include "sfr.h"

/**
 * The state field registry, where each sensor will have its values updated
*/
namespace sfr {
    /**
     * Contains the states for the BME280 Humidity and Temperature Sensor
    */
    namespace BME280 { 
        SensorReading *temp_c = new SensorReading(); 
        SensorReading *pressure = new SensorReading(); 
        SensorReading *altitude = new SensorReading(); 
        SensorReading *humidity = new SensorReading(); 
    }; 
    /**
     * Contains the states for the MAX-M10S-00B GPS 
    */
    namespace GPS {

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
        
    }; 
}; 

/**
 * - IMU : Adafruit 9-DOF Orientation IMU Fusion Breakout - BNO085 (BNO080) - STEMMA QT / Qwiic
- CPU: Atmega328p
- Temperature: Humidity sensor BME280
- GPS: MAX-M10S-00B
- LORA Transmitter: SX1276
*/
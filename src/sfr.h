#pragma once 

#include "Arduino.h"
#include "SensorReading.h"

/**
 * The state field registry, where each sensor will have its values updated
*/
namespace sfr {
    /**
     * Contains the states for the BME280 Humidity and Temperature Sensor
    */
    namespace BME280 { 
        extern SensorReading *temp_c; 
        extern SensorReading *pressure; 
        // extern SensorReading *altitude; 
        // extern SensorReading *humidity; 
    }; 
    /**
     * Contains the states for the MAX-M10S-00B GPS 
    */
    namespace GPS {
        extern SensorReading *latitude; 
        extern SensorReading *longitude; 
        //extern SensorReading *altitude; 
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
        extern SensorReading *Acc_x;
        extern SensorReading *Acc_y;
        extern SensorReading *Acc_z;
        extern SensorReading *Gryo_x;
        extern SensorReading *Gryo_y;
        extern SensorReading *Gryo_z;
        // extern SensorReading *Magn_x;
        // extern SensorReading *Magn_y;
        // extern SensorReading *Magn_z;
    }; 
}; 

/**
 * - IMU : Adafruit 9-DOF Orientation IMU Fusion Breakout - BNO085 (BNO080) - STEMMA QT / Qwiic
- CPU: Atmega328p
- Temperature: Humidity sensor BME280
- GPS: MAX-M10S-00B
- LORA Transmitter: SX1276
*/
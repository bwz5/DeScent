#pragma once 

#include <Adafruit_BME280.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>

/**
 * Defines the I2C Pins for the BME28O Temperature Sensor
*/
#define BME_SCK 
#define BME_MISO 
#define BME_MOSI 
#define BME_CS 


class TempMonitor {
    private:
        // If a sensor has not been initialized, then do not print any of its values
        bool initialized = false; 

        Adafruit_BME280 bme; 
    public: 
        /**
         * Begin reading from the sensor
        */
        void execute(); 
        /**
         * Initialize the I2C Protocol
        */
        TempMonitor(); 
        /**
         * Checks if the sensor has been initialized
        */
       bool checkInitialization(); 
}; 
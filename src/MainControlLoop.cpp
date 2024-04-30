#include "MainControlLoop.h"
#include "sfr.h"

MainControlLoop::MainControlLoop() : 

/* Constructor that will create different objects based on what is being tested. */

#ifdef TEMP_TEST
tempMonitor() 
#endif 

#ifdef IMU_TEST
imuMonitor()
#endif 
{
    delay(1000);
}

void MainControlLoop::execute(){
    float value; 

    #ifdef TEMP_TEST

    if (tempMonitor.checkInitialization()){ 

         tempMonitor.execute(); 

         Serial.println("Temperature Monitor Values: "); 

        // sfr::BME280::altitude->getValue(&value); 
        // Serial.print("Altitude: "); 
        // Serial.println(value);

        sfr::BME280::temp_c->getValue(&value); 
        Serial.print("Temperature in Celsius "); 
        Serial.println(value);

        // sfr::BME280::humidity->getValue(&value); 
        // Serial.print("Humidity: "); 
        // Serial.println(value);

        sfr::BME280::pressure->getValue(&value); 
        Serial.print("Pressure from Sea Level: "); 
        Serial.println(value);
        
    } else {
        Serial.print("Temperature Sensor not Initialized"); 
    }

    #endif 

    #ifdef IMU_TEST

    if (imuMonitor.intialized()){
        imuMonitor.exceute();

        Serial.println("IMU Values: "); 

        sfr::BNO085::Acc_x->getValue(&value);
        Serial.print("Accelerometer (x,y,z) : \n");
        Serial.println(value);
        sfr::BNO085::Acc_y->getValue(&value);
        Serial.println(value);
        sfr::BNO085::Acc_z->getValue(&value);
        Serial.println(value);

        sfr::BNO085::Gryo_x->getValue(&value);
        Serial.print("Gyroscope (x,y,z) : \n");
        Serial.println(value);
        sfr::BNO085::Gryo_y->getValue(&value);
        Serial.println(value);
        sfr::BNO085::Gryo_z->getValue(&value);
        Serial.println(value);

        // sfr::BNO085::Magn_x->getValue(&value);
        // Serial.print("Magnetometer (x,y,z) : ");
        // Serial.println(value);
        // sfr::BNO085::Magn_y->getValue(&value);
        // Serial.println(value);
        // sfr::BNO085::Magn_z->getValue(&value);
        // Serial.println(value);

    }
    else{
        Serial.print("IMU not Initialized"); 
    }


    #endif 
}


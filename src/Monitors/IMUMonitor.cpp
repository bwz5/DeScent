#include "IMUMonitor.h"
#include "sfr.h"

// sh2_SensorValue_t sensorValue;

IMUMonitor::IMUMonitor(){
    
  // Try to initialize!
  if (!sensor.begin()) {
    Serial.println("Failed to find BNO085 chip");
  }
  else {
  Serial.println("BNO085 Found!");
  intialization = true; 
  // reports();
  }
}
void IMUMonitor::exceute(){
    if (sensor.hasReset()) {
    Serial.print("sensor was reset ");
    reports();
    }
    if(sensor.dataAvailable()){
      sfr::BNO085 :: Acc_x -> setValue(sensor.getAccelX());
      sfr::BNO085 :: Acc_y -> setValue(sensor.getAccelY());
      sfr::BNO085 :: Acc_z -> setValue(sensor.getAccelZ());
      sfr::BNO085 :: Gryo_y -> setValue(sensor.getGyroY());
      sfr::BNO085 :: Gryo_x -> setValue(sensor.getGyroX());
      sfr::BNO085 :: Gryo_z -> setValue(sensor.getGyroZ());
    }
    // if (!sensor.getSensorEvent(&sensorValue)) {
    // return;
    // }
    // switch (sensorValue.sensorId) {

    // case SH2_ACCELEROMETER:
      // sfr::BNO085 :: Acc_x -> setValue(sensorValue.un.accelerometer.x);
      // sfr::BNO085 :: Acc_y -> setValue(sensorValue.un.accelerometer.y);
      // sfr::BNO085 :: Acc_z -> setValue(sensorValue.un.accelerometer.z);
    //   break;
    // case SH2_GYROSCOPE_CALIBRATED:
      // sfr::BNO085 :: Gryo_x -> setValue(sensorValue.un.gyroscope.x);
      // sfr::BNO085 :: Gryo_y -> setValue(sensorValue.un.gyroscope.y);
      // sfr::BNO085 :: Gryo_z -> setValue(sensorValue.un.gyroscope.z);
    //   break;
    // // case SH2_MAGNETIC_FIELD_CALIBRATED:
    // //   sfr::BNO085 :: Magn_x -> setValue(sensorValue.un.magneticField.x);
    // //   sfr::BNO085 :: Magn_y -> setValue(sensorValue.un.magneticField.y);
    // //   sfr::BNO085 :: Magn_z -> setValue(sensorValue.un.magneticField.z);
    // //   break;
    // }
}

void IMUMonitor::reports(void){
    Serial.println("Setting desired reports");
    sensor.enableAccelerometer(50); //Send data update every 50ms
    sensor.enableGyro(50); //Send data update every 50ms
    // if (!sensor.enableReport(SH2_ACCELEROMETER)) {
    // Serial.println("Could not enable accelerometer");
    //  }
    // if (!sensor.enableReport(SH2_GYROSCOPE_CALIBRATED)) {
    // Serial.println("Could not enable gyroscope");
    //  }
    // if (!sensor.enableReport(SH2_MAGNETIC_FIELD_CALIBRATED)) {
    // Serial.println("Could not enable magnetic field calibrated");
    // }
}

bool IMUMonitor::intialized(void){
    return intialization;
}

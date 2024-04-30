#include "IMUMonitor.h"
#include "sfr.h"

IMUMonitor::IMUMonitor(){
  initialization= false; 

  if (!sensor.begin()) {
    Serial.println("Failed to find BNO085 chip.\n");
  }
  else {
  Serial.println("BNO085 was found.\n");
  initialization = true; 
  }
}
void IMUMonitor::exceute(){
    if (sensor.hasReset()) {
      Serial.print("IMU sensor was reset.\n");
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
    return initialization;
}

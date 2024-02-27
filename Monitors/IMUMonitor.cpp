#include "IMUMonitor.h"
#include "../src/sfr.h"

sh2_SensorValue_t sensorValue;

IMUMonitor::IMUMonitor(){
    
  // Try to initialize!
  if (!sensor.begin_I2C()) {
    Serial.println("Failed to find BNO085 chip");
  }
  else {
  Serial.println("BNO085 Found!");
  intialization = true; 
  reports();
  }
}
void execute(){
    if (sensor.wasReset()) {
    Serial.print("sensor was reset ");
    setReports();
    }
    if (!sensor.getSensorEvent(&sensorValue)) {
    return;
    }
    switch (sensorValue.sensorId) {

    case SH2_ACCELEROMETER:
      stf::BNO085 :: Acc_x -> setValue(sensorValue.un.accelerometer.x);
      stf::BNO085 :: Acc_y -> setValue(sensorValue.un.accelerometer.y);
      stf::BNO085 :: Acc_z -> setValue(sensorValue.un.accelerometer.z);
      break;
    case SH2_GYROSCOPE_CALIBRATED:
      stf::BNO085 :: Gryo_x -> setValue(sensorValue.un.gyroscope.x);
      stf::BNO085 :: Gryo_y -> setValue(sensorValue.un.gyroscope.y);
      stf::BNO085 :: Gryo_z -> setValue(sensorValue.un.gyroscope.z);
      break;
    case SH2_MAGNETIC_FIELD_CALIBRATED:
      stf::BNO085 :: Magn_x -> setValue(sensorValue.un.magneticField.x);
      stf::BNO085 :: Magn_y -> setValue(sensorValue.un.magneticField.y);
      stf::BNO085 :: Magn_z -> setValue(sensorValue.un.magneticField.z);
      break;
    }
}

void reports(void){
    Serial.println("Setting desired reports");
    if (!sensor.enableReport(SH2_ACCELEROMETER)) {
    Serial.println("Could not enable accelerometer");
     }
    if (!sensor.enableReport(SH2_GYROSCOPE_CALIBRATED)) {
    Serial.println("Could not enable gyroscope");
     }
    if (!sensor.enableReport(SH2_MAGNETIC_FIELD_CALIBRATED)) {
    Serial.println("Could not enable magnetic field calibrated");
    }
}

bool intialized(void){
    return intialization;
}

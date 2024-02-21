#include "SensorReading.h"

float SensorReading::getCurrentValue(){
    return value; 
}

void SensorReading::updateValue(float newValue){
    value = newValue; 
}
#include "SensorReading.h"

void SensorReading::setValue(float newValue){
    value = newValue;
}

void SensorReading::getValue(float *changeValue){
    //dereference and update; 
    *changeValue = value; 
}

SensorReading::SensorReading(){
    
}
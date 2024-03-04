#include <Arduino.h>
#include "MainControlLoop.h"

MainControlLoop mcl; 

void setup() {
    Serial.begin(9600); 
}

void loop() {
    mcl.execute();
} 

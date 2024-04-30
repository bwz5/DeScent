#include <Arduino.h>
#include "MainControlLoop.h"

// #include <Wire.h>

MainControlLoop* mcl; 

void setup() {
    Serial.begin(9600);

   mcl = new MainControlLoop();
}

void loop() {
    mcl->execute();
    delay(1000);
}
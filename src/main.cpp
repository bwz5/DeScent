#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  printf("Welcome to OOP-DeScent ChipSat Software");  
} 

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
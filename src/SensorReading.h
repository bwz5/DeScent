#pragma once 

/**
 * Represents a sensor reading. Can update and get the current value. 
*/
class SensorReading {
    private: 
        /**
         * Stores the current value 
        */
        float value; 
    public: 
        /**
         * Returns the current value field 
        */
        float getCurrentValue(); 
        /**
         * Tries to update the current value.
        */
        void updateValue(float newValue); 
}; 
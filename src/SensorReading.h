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
        void setValue(float newValue); 
        /**
         * Updates the changeValue to what our current value field is.
        */
        void getValue(float *changeValue); 
}; 
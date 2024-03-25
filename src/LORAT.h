#include <LoRa.h>

/*

!!!SIZE TEST!!!!!

*/



class LORA{
    private: 
        bool start = LoRa.begin(915E6); 
        double frequency = 915E6; 
    // SX1278 has the following pin order:
    // Module(NSS/CS, DIO0, RESET, DIO1)
    // SX1278 radio = new Module(10, 2, 9, 3);

    // create the node instance on the EU-868 band


    // using the radio module and the encryption key
    // make sure you are using the correct band
    // based on your geographical location!
    
    // LoRaWANNode node(&radio, &EU868);   

    public: 
        void setup(); 
        void Transmit(); 
        void Receive(); 
    

};

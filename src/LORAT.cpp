#include "LORAT.h"

void LORA::setup() {
    Serial.println("LoRa module intialization");
    start = LoRa.begin(frequency);
    if (!start) {
     Serial.println("Starting LoRa failed!");
    }
}

void LORA::Transmit() {
     Serial.print("Sending packet: ");
     uint8_t message = 'A';

     LoRa.beginPacket();

     LoRa.write(message);

     LoRa.endPacket();

     Serial.print("Completed Transmition. ");
}

void LORA::Receive(){
      // try to parse packet
    int packetSize = LoRa.parsePacket();
    if (packetSize) {
        // received a packet
        Serial.print("Received packet '");

        // read packet
        while (LoRa.available()) {
            Serial.print((char)LoRa.read());
        }

     // print RSSI of packet
     Serial.print("' with RSSI: ");
     Serial.println(LoRa.packetRssi());
    }
    else{
         Serial.print("Have not received packet.'");
    }
}
#include "DHT.h"
#define DHTTYPE DHT11
uint8_t DHTPin =D7;
DHT dht(DHTPin  , DHTTYPE);

float Temperature, Humidity, HeatIndex;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.begin();
}


void loop() {
  ReadDHT11();
  // put your main code here, to run repeatedly:
  delay(6000);
}


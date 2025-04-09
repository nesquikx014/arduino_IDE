void ReadDHT11() {
  float temperature = round(dht.readTemperature()*10/10);
  float humidity = round(dht.readHumidity()*10/10);
  float heatIndex = round(dht.computeHeatIndex(Temperature, Humidity, false)*10/10);

  if(isnan(temperature) || isnan(humidity) || isnan (heatIndex)) {
    //sensor error
    Serial.println("DHT11 sensor error");
  }
  else{
    Temperature = temperature;
    Humidity = humidity;
    HeatIndex = heatIndex;

    Serial.println("Temp: " + String(Temperature) + ".C");
    Serial.println("Humidity: " + String(Humidity));
    Serial.println("% HeatIndex: " + String(HeatIndex) + "\n");

  }

}
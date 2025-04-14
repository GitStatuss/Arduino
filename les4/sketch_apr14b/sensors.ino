void ReadDHT11(){
  float temperature = round(dht.readTemperature()*10)/10;
  float humidity = round(dht.readHumidity()*10/10);
  float heatIndex = round(dht.computeHeatIndex(Temperature, Humidity, false)*10)/10;

  if{
    Temperature = temperature;
    Humidity = humidity;
    HeatIndex = heatIndex;

    Serial.println("Temp: " + String(Temperature));
    Serial.println("Humidity: " + String(Humidity));
    Serial.println("% HeatIndex: " + String(HeatIndex));
  }
}

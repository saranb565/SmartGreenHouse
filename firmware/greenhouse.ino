#include <WiFi.h>
#include <WebServer.h>
#include "DHT.h"

// WiFi credentials
const char* ssid = "CE5";
const char* password = "tigertiger";

// Web server running on port 80
WebServer server(80);

// LED blinking
int led_pin = 2;

// Auto light
uint8_t outled = 21;

// LDR
#define ldrpin 34
int ldrVal;

// Temperature and humidity
#define DHTTYPE DHT22
uint8_t dhtpin = 5;
DHT dht(dhtpin, DHTTYPE);
float temperature;
float humidity;

// Soil moisture and water pump
#define soil_moisture 33
#define pump 18
int moistureThreshold = 3500;
int moistureVal;

void setup() {
  Serial.begin(115200);

  // LED blink
  pinMode(led_pin, OUTPUT);

  // Auto light
  pinMode(outled, OUTPUT);

  // Soil moisture and water pump
  pinMode(soil_moisture, INPUT);
  pinMode(pump, OUTPUT);
  digitalWrite(pump, HIGH); // OFF by default

  // DHT sensor
  dht.begin();

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi!");
  Serial.println(WiFi.localIP());

  // Start server
  server.on("/", handleRoot);
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  // Blink LED
  digitalWrite(led_pin, HIGH);
  delay(250);
  digitalWrite(led_pin, LOW);
  delay(250);

  // Update sensor values
  dht22();
  ldr();
  soil_moisture_check();

  // Handle client request
  server.handleClient();
}

void dht22() {
  temperature = dht.readTemperature();  
  humidity = dht.readHumidity();      

  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.print("\tHumidity = ");
  Serial.println(humidity);
}

void ldr() {
  ldrVal = analogRead(ldrpin);
  Serial.print("Luminous Value: ");
  Serial.println(ldrVal);
  if (ldrVal > 3000) {
    outled_on();
  } else {
    outled_off();
  }
}

void outled_on() {
  digitalWrite(outled, HIGH);
}

void outled_off() {
  digitalWrite(outled, LOW);
}

void soil_moisture_check() {
  moistureVal = analogRead(soil_moisture);
  Serial.print("Soil Moisture Reading: ");
  Serial.println(moistureVal);

  if (moistureVal > moistureThreshold) {
    Serial.println("Soil is dry. Turning pump ON.");
    digitalWrite(pump, LOW);
  } else {
    Serial.println("Soil is moist. Turning pump OFF.");
    digitalWrite(pump, HIGH);
  }
}

// Serve webpage
void handleRoot() {
  String html = "<!DOCTYPE html><html><head><meta charset='UTF-8'><meta name='viewport' content='width=device-width, initial-scale=1'><title>Greenhouse Monitor</title></head><body style='font-family:sans-serif;text-align:center;background:#e0ffe0;'>";

  html += "<h2>🌱 Greenhouse Sensor Dashboard</h2>";
  html += "<p><strong>🌡 Temperature:</strong> " + String(temperature) + " °C</p>";
  html += "<p><strong>💧 Humidity:</strong> " + String(humidity) + " %</p>";
  html += "<p><strong>🌞 Light (LDR):</strong> " + String(ldrVal) + "</p>";
  html += "<p><strong>🌱 Soil Moisture:</strong> " + String(moistureVal) + "</p>";

  html += "<p><em>Refresh page for updated values.</em></p>";
  html += "</body></html>";

  server.send(200, "text/html", html);
}

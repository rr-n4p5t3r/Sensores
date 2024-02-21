#include "DHT_sensor_library.h"

// Definir el pin del LED
#define LED_PIN 13

void setup() {
    initDHT();
    initOtherSensors();

    // Configurar el pin del LED como salida
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    float temperature = readTemperature();
    float humidity = readHumidity();
    int wifiState = readWiFi5GSensor();

    if (wifiState == HIGH) {
        // Encender el LED cuando se detecte señal WiFi de 5GHz
        digitalWrite(LED_PIN, HIGH);
        Serial.println("¡Se detectó señal WiFi de 5GHz!");
    } else {
        // Apagar el LED cuando no se detecte señal WiFi de 5GHz
        digitalWrite(LED_PIN, LOW);
    }

    delay(1000);
}

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

    // Realizar acciones basadas en la lectura de humedad
    if (humidity > 80) {
        // Encender el LED cuando la humedad es alta
        digitalWrite(LED_PIN, HIGH);
        Serial.println("¡La humedad es alta!");
    } else {
        // Apagar el LED cuando la humedad es normal
        digitalWrite(LED_PIN, LOW);
    }

    delay(1000);
}

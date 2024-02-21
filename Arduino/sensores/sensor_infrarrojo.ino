#include "DHT_sensor_library.h"

// Definir los pines del LED y del zumbador
#define LED_PIN 13
#define BUZZER_PIN 8

void setup() {
    initDHT();
    initOtherSensors();

    // Configurar el pin del LED y del zumbador como salida
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
    float temperature = readTemperature();
    float humidity = readHumidity();
    int infraredState = readInfraredSensor();

    if (infraredState == HIGH) {
        // Encender el LED y activar el zumbador cuando se detecte proximidad infrarroja
        digitalWrite(LED_PIN, HIGH);
        tone(BUZZER_PIN, 1000); // Activar el zumbador a una frecuencia de 1000 Hz
        Serial.println("¡Se detectó proximidad infrarroja!");
    } else {
        // Apagar el LED y detener el zumbador cuando no haya proximidad infrarroja
        digitalWrite(LED_PIN, LOW);
        noTone(BUZZER_PIN); // Detener el zumbador
    }

    delay(1000);
}

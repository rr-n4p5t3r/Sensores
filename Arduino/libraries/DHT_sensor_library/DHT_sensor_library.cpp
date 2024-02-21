#include "DHT_sensor_library.h"
#include <DHT.h>

// Definir el pin al que está conectado el sensor DHT11
#define DHT_PIN 7

// Crear una instancia del sensor DHT11
DHT dht(DHT_PIN, DHT11);

// Inicialización del sensor DHT11
void initDHT() {
    dht.begin();
}

// Lectura de la temperatura del sensor DHT11
float readTemperature() {
    return dht.readTemperature();
}

// Lectura de la humedad del sensor DHT11
float readHumidity() {
    return dht.readHumidity();
}

// Implementación de las funciones para los sensores adicionales

// Inicialización de los pines de los sensores adicionales
void initOtherSensors() {
    pinMode(PIN_SENSOR_MOVIMIENTO, INPUT);
    pinMode(PIN_SENSOR_HUMO, INPUT);
    pinMode(PIN_SENSOR_INFRARROJO, INPUT);
    pinMode(PIN_SENSOR_WIFI_2_4G, INPUT);
    pinMode(PIN_SENSOR_WIFI_5G, INPUT);
}

// Lectura del sensor de movimiento
int readMotionSensor() {
    return digitalRead(PIN_SENSOR_MOVIMIENTO);
}

// Lectura del sensor de humo
int readSmokeSensor() {
    return digitalRead(PIN_SENSOR_HUMO);
}

// Lectura del sensor infrarrojo de proximidad
int readInfraredSensor() {
    return digitalRead(PIN_SENSOR_INFRARROJO);
}

// Lectura del sensor de WiFi 2.4GHz
int readWiFi2_4GSensor() {
    return digitalRead(PIN_SENSOR_WIFI_2_4G);
}

// Lectura del sensor de WiFi 5GHz
int readWiFi5GSensor() {
    return digitalRead(PIN_SENSOR_WIFI_5G);
}

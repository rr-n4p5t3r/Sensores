#ifndef DHT_SENSOR_LIBRARY_H
#define DHT_SENSOR_LIBRARY_H

#include <DHT.h> // Incluir la biblioteca DHT si es necesario

// Definir el pin al que está conectado el sensor DHT11
#define DHT_PIN 7

// Crear una instancia del sensor DHT11
DHT dht(DHT_PIN, DHT11);

// Función para inicializar el sensor DHT11
void initDHT() {
    dht.begin();
}

// Función para leer la temperatura del sensor DHT11
float readTemperature() {
    return dht.readTemperature();
}

// Función para leer la humedad del sensor DHT11
float readHumidity() {
    return dht.readHumidity();
}

// Constantes para los pines de los otros sensores
#define PIN_SENSOR_MOVIMIENTO 2
#define PIN_SENSOR_HUMO 3
#define PIN_SENSOR_INFRARROJO 4
#define PIN_SENSOR_WIFI_2_4G 5
#define PIN_SENSOR_WIFI_5G 6

// Función para inicializar los pines de los sensores adicionales
void initOtherSensors() {
    pinMode(PIN_SENSOR_MOVIMIENTO, INPUT);
    pinMode(PIN_SENSOR_HUMO, INPUT);
    pinMode(PIN_SENSOR_INFRARROJO, INPUT);
    pinMode(PIN_SENSOR_WIFI_2_4G, INPUT);
    pinMode(PIN_SENSOR_WIFI_5G, INPUT);
}

// Función para leer el estado del sensor de movimiento
int readMotionSensor() {
    return digitalRead(PIN_SENSOR_MOVIMIENTO);
}

// Función para leer el estado del sensor de humo
int readSmokeSensor() {
    return digitalRead(PIN_SENSOR_HUMO);
}

// Función para leer el estado del sensor infrarrojo de proximidad
int readInfraredSensor() {
    return digitalRead(PIN_SENSOR_INFRARROJO);
}

// Función para leer el estado del sensor de WiFi 2.4GHz
int readWiFi2_4GSensor() {
    return digitalRead(PIN_SENSOR_WIFI_2_4G);
}

// Función para leer el estado del sensor de WiFi 5GHz
int readWiFi5GSensor() {
    return digitalRead(PIN_SENSOR_WIFI_5G);
}

#endif  // DHT_SENSOR_LIBRARY_H

Arduino
-----------------

## Bibliotecas

- **libraries/**
  - **DHT_sensor_library/**
    - `DHT_sensor_library.cpp`
    - `DHT_sensor_library.h`
    - `DHT.h`

## Sensores

- **sensores/**
  - `sensor_movimiento.ino`
  - `sensor_humo.ino`
  - `sensor_humedad.ino`
  - `sensor_infrarrojo.ino`
  - `sensor_wifi_2.4G.ino`
  - `sensor_wifi_5G.ino`

### Descripción

Los archivos ".ino" de la carpeta "Arduino" están diseñados para funcionar con placas Arduino y algunos sensores comunes. A continuación, se proporciona una breve descripción de cada sensor y la placa Arduino que puedes usar:

- **Sensor de movimiento (PIR):** Este sensor detecta cambios en el nivel de radiación infrarroja en su campo de visión. Es comúnmente utilizado para detectar movimiento humano. Puedes usar una placa Arduino como la Arduino Uno o la Arduino Nano junto con un sensor PIR como el HC-SR501.

- **Sensor de humo:** Este tipo de sensor se utiliza para detectar la presencia de humo en el ambiente, lo que podría indicar un incendio. Puedes utilizar una placa Arduino junto con un módulo sensor de humo como el MQ-2.

- **Sensor de humedad y temperatura (DHT11 o DHT22):** Estos sensores te permiten medir la humedad y la temperatura del ambiente. Puedes usar una placa Arduino junto con un sensor DHT11 o DHT22.

- **Sensor infrarrojo de proximidad (IR):** Estos sensores detectan objetos cercanos mediante la emisión y recepción de luz infrarroja. Puedes utilizar una placa Arduino junto con un sensor IR como el sensor de proximidad IR SHARP GP2Y0A21YK0F.

- **Sensor de WiFi 2.4GHz y 5GHz:** Estos sensores pueden usarse para detectar la intensidad de la señal WiFi en diferentes bandas de frecuencia. Para esto, necesitarías hardware adicional y probablemente una placa más potente que pueda manejar la conectividad WiFi, como la Arduino Uno WiFi Rev2 o la ESP32.

Cada uno de estos sensores puede requerir una configuración y conexión específica con la placa Arduino. Asegúrate de consultar la documentación y los ejemplos de código proporcionados con cada sensor para obtener instrucciones detalladas sobre cómo conectarlos y utilizarlos con tu placa Arduino.

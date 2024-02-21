RaspberryPi
-----------------

## Scripts

- **scripts/**
  - `sensor_movimiento.py`
  - `sensor_humo.py`
  - `sensor_humedad.py`
  - `sensor_infrarrojo.py`
  - `sensor_wifi_2.4G.py`
  - `sensor_wifi_5G.py`

## Helpers

- **helpers/**

### Descripción

En el caso de la Raspberry Pi, los scripts mencionados se ejecutarían en lugar de cargarlos en una placa física como en el caso de Arduino. La Raspberry Pi es una computadora de tamaño reducido que puede ejecutar un sistema operativo completo, como Raspbian (basado en Linux). Puedes conectar diferentes sensores y periféricos a la Raspberry Pi y utilizarla para recopilar datos, procesarlos y tomar decisiones basadas en ellos.

A continuación, se proporciona una breve descripción de cada uno de los scripts para Raspberry Pi:

- **sensor_movimiento.py:** Este script está diseñado para detectar movimiento utilizando un sensor de movimiento conectado a la Raspberry Pi. Podría utilizar un sensor PIR u otro tipo de sensor de movimiento compatible.

- **sensor_humo.py:** Este script detecta la presencia de humo utilizando un sensor de humo conectado a la Raspberry Pi. Podría utilizar un módulo de sensor de humo como el MQ-2 o similar.

- **sensor_humedad.py:** Este script mide la humedad del aire utilizando un sensor de humedad conectado a la Raspberry Pi. Podría utilizar un sensor DHT11, DHT22 u otro sensor de humedad compatible.

- **sensor_infrarrojo.py:** Este script detecta la proximidad de objetos utilizando un sensor infrarrojo de proximidad conectado a la Raspberry Pi. Podría utilizar un sensor IR como el sensor de proximidad IR SHARP GP2Y0A21YK0F.

- **sensor_wifi_2.4G.py:** Este script escanea y analiza las redes WiFi en la banda de 2.4GHz utilizando la interfaz WiFi de la Raspberry Pi. Proporciona información sobre las redes WiFi disponibles, la intensidad de la señal, etc.

- **sensor_wifi_5G.py:** Similar al script anterior, pero se enfoca en las redes WiFi en la banda de 5GHz.

Estos scripts pueden ejecutarse en la Raspberry Pi para realizar diversas tareas, como monitoreo ambiental, detección de intrusiones, análisis de redes WiFi, entre otros. Dependiendo de los sensores específicos que estés utilizando, asegúrate de configurar correctamente los scripts para interactuar con ellos.

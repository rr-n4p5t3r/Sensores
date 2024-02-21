# Este script mide la humedad utilizando un sensor de humedad conectado a la Raspberry Pi

# Importar las bibliotecas necesarias
import Adafruit_DHT

# Definir el tipo de sensor y el pin
DHT_SENSOR = Adafruit_DHT.DHT11
DHT_PIN = 4

try:
    while True:
        humidity, _ = Adafruit_DHT.read_retry(DHT_SENSOR, DHT_PIN)
        if humidity is not None:
            print("Humedad: {:.1f}%".format(humidity))
        else:
            print("Error al leer el sensor de humedad...")
except KeyboardInterrupt:
    print("Deteniendo el script...")

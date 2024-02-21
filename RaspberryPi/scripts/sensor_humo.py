# Este script detecta la presencia de humo utilizando un sensor de humo conectado a la Raspberry Pi

# Importar las bibliotecas necesarias
import RPi.GPIO as GPIO

# Definir el pin del sensor de humo
SMOKE_PIN = 17

# Configurar el modo de los pines GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(SMOKE_PIN, GPIO.IN)

try:
    print("Esperando la detección de humo...")
    while True:
        if GPIO.input(SMOKE_PIN):
            print("¡Se detectó humo!")
        else:
            print("No se detecta humo...")
except KeyboardInterrupt:
    print("Deteniendo el script...")
finally:
    GPIO.cleanup()

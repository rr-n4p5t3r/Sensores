# Este script detecta movimiento utilizando un sensor de movimiento conectado a la Raspberry Pi

# Importar las bibliotecas necesarias
import RPi.GPIO as GPIO

# Definir el pin del sensor de movimiento
PIR_PIN = 18

# Configurar el modo de los pines GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(PIR_PIN, GPIO.IN)

try:
    print("Esperando movimiento...")
    while True:
        if GPIO.input(PIR_PIN):
            print("¡Se detectó movimiento!")
        else:
            print("No hay movimiento...")
except KeyboardInterrupt:
    print("Deteniendo el script...")
finally:
    GPIO.cleanup()

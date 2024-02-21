# Este script detecta la proximidad de objetos utilizando un sensor infrarrojo de proximidad conectado a la Raspberry Pi

# Importar las bibliotecas necesarias
import RPi.GPIO as GPIO
import time

# Definir el pin del sensor infrarrojo
IR_PIN = 22

# Configurar el modo de los pines GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(IR_PIN, GPIO.IN)

try:
    print("Esperando detección de proximidad infrarroja...")
    while True:
        if GPIO.input(IR_PIN):
            print("¡Se detectó proximidad infrarroja!")
        else:
            print("No hay detección de proximidad infrarroja...")
        time.sleep(0.1)
except KeyboardInterrupt:
    print("Deteniendo el script...")
finally:
    GPIO.cleanup()

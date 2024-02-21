# Este script escanea y muestra las redes WiFi disponibles en la banda de 2.4GHz utilizando la Raspberry Pi

# Importar las bibliotecas necesarias
import subprocess

# Ejecutar el comando para escanear redes WiFi en la banda de 2.4GHz
output = subprocess.check_output(["sudo", "iwlist", "wlan0", "scan"])
output = output.decode("utf-8")

# Filtrar y mostrar los resultados
networks = [line.split("ESSID:")[1].strip().strip('"') for line in output.split("\n") if "ESSID:" in line]
print("Redes WiFi en la banda de 2.4GHz:")
for network in networks:
    print("- {}".format(network))

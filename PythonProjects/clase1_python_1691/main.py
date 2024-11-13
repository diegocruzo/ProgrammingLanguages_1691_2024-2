from zoologico import Zoologico
from perro import Perro
from gato import Gato

# Ejecución del programa principal
if __name__ == "__main__":
    perro = Perro("Firulais", False, "Gran danés")
    gato = Gato("Misu", True, "Azul")
    
    zoo = Zoologico()
    zoo.agregar_animal(perro)
    zoo.agregar_animal(gato)
    
    # Mostrar los animales en el zoológico
    zoo.mostrar_animales()
    
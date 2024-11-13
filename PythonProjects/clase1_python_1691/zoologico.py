from perro import Perro
from gato import Gato

class Zoologico:
    
    # Constructor
    def __init__(self):
        self.animales = [] # Crear una lista en blanco
        
    def agregar_animal(self, animal):
        if isinstance(animal, (Perro, Gato)):
            self.animales.append(animal) # append es un método para adicionar elementos en una lista de Python
        else:
            print("Solo se pueden agregar perros o gatos.")

    def mostrar_animales(self):
        for animal in self.animales:
            print(animal)
            animal.expresarse() # Polimorfismo
            print("Cantidad de patas:",animal.get_cantidad_patas())
            animal.alimentar_cria()
            animal.caminar()
            
        
        
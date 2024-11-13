# Importar la clase "Animal" desde la biblioteca de clases "animal.py"
from animal import Animal

# Herencia: La clase Mamifero hereda de Animal
class Mamifero(Animal):
    
    # Constructor
    def __init__(self, nombre, tiene_pelo):
        super().__init__(nombre) # Crear la instancia de la clase haciendo uso del constructor de Animal por herencia
        self.__tiene_pelo = tiene_pelo # Atributo privado de Mamifero
        
    def alimentar_cria(self):
        print(f"{self.get_nombre()} está alimentando a su cría.")
    
    # Getter y Setter
    def get_tiene_pelo(self):
        return self.__tiene_pelo
    
    def set_tiene_pelo(self, tiene_pelo):
        self.__tiene_pelo = tiene_pelo
        
    # Mostrar en consola
    def __str__(self):
        pelo = "si" if self.__tiene_pelo else "no"
        return super().__str__() + f", tiene pelo: {pelo}"
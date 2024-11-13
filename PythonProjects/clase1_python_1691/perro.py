from mamifero import Mamifero
from cuadrupedo import Cuadrupedo

# Herencia múltiple: Perro hereda de Mamífero y de Cuadrúpedo
class Perro(Mamifero, Cuadrupedo):
    
    # Constructor
    def __init__(self, nombre, tiene_pelo, raza):
        Mamifero.__init__(self, nombre, tiene_pelo)
        Cuadrupedo.__init__(self)
        self.__raza = raza
    
    # Sobreescritura de un método
    def expresarse(self):
        print("Guau! Guau!")
        
    # Getter y Setter
    def get_raza(self):
        return self.__raza
        
    def set_raza(self, raza):
        self.__raza = raza
    
    # Mostrar en consola
    def __str__(self):
        return super().__str__() + f", raza: {self.__raza}"
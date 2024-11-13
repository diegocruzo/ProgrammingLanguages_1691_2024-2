# Creación de la clase (abstracción)
class Animal:
    
    # Crear el constructor de la clase
    def __init__(self, nombre):
        self.__nombre = nombre # Atributo privado (encapsulamiento)
        
    # Función que se va a sobreescribir
    def expresarse(self):
        raise NotImplementedError("Este método debe ser implementado en la subclase")
    
    # Getter y Setter
    def get_nombre(self):
        return self.__nombre
    
    def set_nombre(self, nombre):
        self.__nombre = nombre
    
    # Método para establecer la forma de visualización de una instancia 
    # de la clase por consola
    def __str__(self):
        return f"Animal: {self.__nombre}"
    

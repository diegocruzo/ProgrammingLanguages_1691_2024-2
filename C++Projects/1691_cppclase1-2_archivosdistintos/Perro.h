#include "Animal.h"
#include "Mamifero.h"

// Herencia múltiple: Perro hereda tanto de Animal como de Mamifero
class Perro: public Animal, public Mamifero {
    
    private:
        int edad;
    
    public:
        // Constructor
        Perro(string nombre);
        
        void expresarse() override;
        string recorridoEnMetrosPorSegundo() override;
        void alimentarse(string tipo) override;
        
        // Getter y Setter
        string getEdad();
        void setEdad(int edad);
};
#include "Perro.h"

int main()
{
    // Crear una instancia (objeto) de la clase Perro
    Perro tobi("Tobi");
    // Realizar acciones con la instancia creada
    tobi.setEdad(5);
    cout << tobi.amamantar() << endl;
    tobi.expresarse();
    cout << tobi.recorridoEnMetrosPorSegundo() <<endl;
    tobi.alimentarse("hogareño");
    cout << "Edad: " << tobi.getEdad() << endl;
    cout << tobi.getNombre();
    
    return 0;
}
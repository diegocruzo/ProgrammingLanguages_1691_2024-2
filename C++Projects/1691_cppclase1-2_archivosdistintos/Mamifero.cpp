#include "Mamifero.h"

// Constructor de la clase
Mamifero::Mamifero(string nombre){
    this->nombre = nombre;
    cout << "Ha creado un mamífero llamado " << nombre << endl;
}

// Método propio de la clase
string Mamifero::amamantar() {
    return "Consumo leche proveniente de mi madre";
}

// Getter y Setter
string Mamifero::getNombre() {
    return nombre;
}
void Mamifero::setNombre(string nombre) {
    this->nombre = nombre;
}
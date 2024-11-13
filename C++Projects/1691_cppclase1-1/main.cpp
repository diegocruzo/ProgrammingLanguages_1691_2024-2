#include <iostream>
using namespace std;

// Abstracción: Clase superior
class Mamifero{
    
    private: // Encapsulamiento
        // Atributo
        string nombre;
    public:
        // Constructor de la clase
        Mamifero(string nombre){
            this->nombre = nombre;
        }
        // Constructor por sobrecarga de métodos (Polimorfismo)
        Mamifero(){
            this->nombre = "Por definir";
        }
        
        // Getter y Setter
        string getNombre(){
            return nombre;
        }
        void setNombre(string nombre){
            this->nombre = nombre;
        }
};

// Herencia: la clase Persona hereda de la clase Mamifero
class Persona: public Mamifero{
    
    private:
        // Atributos
        string fechaNacimiento, tipoId;
        int numId;
        char sexoBiologico;
        
        // Métodos
        string setMes(int numMes); // Declaración de un método sin definirlo
    
    public:
        // Constructor
        Persona(string tipoId, int numId){
            this->tipoId = tipoId;
            this->numId = numId;
        }
        
        // Getter y Setter
        string getFechaNacimiento(){
            return fechaNacimiento;
        }
        void setFechaNacimiento(int day, int month, int year){
            this->fechaNacimiento = to_string(day)
                                    + " de "
                                    + setMes(month)
                                    + " del "
                                    + to_string(year);
        }
        
        string getTipoId(){
            return tipoId;
        }
        void setTipoId(string tipoId){
            this->tipoId = tipoId;
        }
        
        int getNumId(){
            return numId;
        }
        void setNumId(int numId){
            this->numId = numId;
        }
        
        char getSexoBiologico(){
            return sexoBiologico;
        }
        void setSexoBiologico(char sexoBiologico){
            this->sexoBiologico = sexoBiologico;
        }
};

// Definición de un método fuera de la clase Persona
string Persona::setMes(int numMes){
    string mes;
    switch (numMes){
        case 1:
            mes = "enero";
            break;
        case 2:
            mes = "febrero";
            break;
        case 3:
            mes = "marzo";
            break;
        case 4:
            mes = "abril";
            break;
        case 5:
            mes = "mayo";
            break;
        case 6:
            mes = "junio";
            break;
        case 7:
            mes = "julio";
            break;
        case 8:
            mes = "agosto";
            break;
        case 9:
            mes = "septiembre";
            break;
        case 10:
            mes = "octubre";
            break;
        case 11:
            mes = "noviembre";
            break;
        case 12:
            mes = "diciembre";
            break;
        default:
            mes = "Error: número de mes no definido";
    }
    return mes;
}

// Método principal
int main()
{
    // Creación de la instancia (objeto) de la clase Persona
    Persona ana("cc", 123456);
    // Utilizar la instancia de la clase Persona con sus acciones
    ana.setNombre("Ana");
    ana.setFechaNacimiento(1, 10, 2024);
    ana.setSexoBiologico('f');
    
    cout << "Usuario: " << ana.getNombre() << endl;
    cout << "Fecha de nacimiento: " << ana.getFechaNacimiento() << endl;
    cout << "Tipo de documento: " << ana.getTipoId() << endl;
    cout << "Número de documento: " << ana.getNumId() << endl;
    cout << "Sexo Biológico: " << ana.getSexoBiologico() << endl;
    return 0;
}
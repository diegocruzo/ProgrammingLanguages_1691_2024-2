#include "Node.h"

class LinkedList {
    
    private:
        Node *first; // Hace referencia al primer elemento (nodo) de la lista
        Node *last; // Hace referencia al último elemento (nodo) de la lista
        int size; // Cantidad de elementos que tiene la lista
        bool isEmpty(); // Función para verificar si la lista está vacía o no
    
    public:
        // Constructor
        LinkedList();
        
        // Operaciones fundamentales
        void insertLast(int);
        void show();
        
        // Getter y Setter
        Node *getFirst() const;
        void setFirst(Node *first);
        
        Node *getLast() const;
        void setLast(Node *last);
        
        int getSize() const;
        void setSize(int size);
};
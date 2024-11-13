#include "LinkedList.h"

// Constructor
LinkedList::LinkedList() {
    this->first = nullptr;
    this->last = nullptr;
    this->size = 0;
}

// Función para verificar si la lista está vacía
bool LinkedList::isEmpty(){
    return first == nullptr;
}

// Función para insertar un nuevo nodo al final de la lista
void LinkedList::insertLast(int data){
    
    // Asignar memoria al nuevo elemento y rellenar el campo de datos
    Node *newNode = new Node(data);
    
    // Verificar si la lista se encuentra vacía
    if(isEmpty()){
        // Operaciones para insertar un nodo en una lista vacía
        setFirst(newNode);
        setLast(newNode);
    }
    else{
        // Operaciones para insertar un nodo al final de una lista
        last->setNext(newNode);
        setLast(newNode);
    }
    size++;
}

// Función para mostrar la lista
void LinkedList::show(){
    
    // Verificar si la lista está vacía
    if(isEmpty()){
        cout << "La lista está vacía" << endl;
        //return; // Esta opción me saca de la función
    }
    else {
        // Recorrer la lista
        Node *aux = getFirst();
        while(aux != nullptr){
            cout << aux->getData() << " ";
            aux = aux->getNext();
        }
        cout << endl;
    }
}

// Getter y Setter
Node *LinkedList::getFirst() const {
    return first;
}
void LinkedList::setFirst(Node *first){
    LinkedList::first = first;
}

Node *LinkedList::getLast() const {
    return last;
}
void LinkedList::setLast(Node *last){
    LinkedList::last = last;
}

int LinkedList::getSize() const {
    return size;
}
void LinkedList::setSize(int size){
    LinkedList::size = size;
}















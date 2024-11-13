#include <iostream>
using namespace std;

class Node {
    
    private:
        int data; // Dato del nodo
        Node *next; // Puntero: Dirección de memoria del elemento al que se dirige
    
    public:
        // Constructor
        Node(int data = 0); 
        
        // Getter y Setter
        int getData() const;
        void setData(int data);
        
        Node *getNext() const;
        void setNext(Node *next);
};
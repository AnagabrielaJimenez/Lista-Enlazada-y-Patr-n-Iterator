#include <iostream>
using namespace std;

template <class T>

class Nodo{
public:
    T elem;
    Nodo<T> *next;
    Nodo();
    Nodo(T elem);
};

template <typename T>
Nodo<T>::Nodo(){
    elem=NULL;
    next=NULL;
}
template <typename T>
Nodo<T>::Nodo(T elem){
    this->elem = elem;
    next=NULL;
}

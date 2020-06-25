#include <iostream>
#include <list>
#include "LinkedList.h"

using namespace std;

template <class T>

class Iterator{
public:
    Nodo<T>* it;
    Iterator(LinkedList<T> L);
    void printList(LinkedList<T> L);
    Nodo<T> operator = (LinkedList<T> L);
    Nodo<T> operator ++();
};

template <typename T>
Iterator<T>::Iterator(LinkedList<T> L){
    it=L.begin();
}
template <typename T>
void Iterator<T>::printList(LinkedList<T> L){
    while(L.end()!=NULL){
        *it->elem
    }
}
template <typename T>
Nodo<T> Iterator<T>::operator=(LinkedList<T> L){
    Iterator it2;
    *(it2->it)=*(L->head);
    return it2;
}
template <typename T>
Nodo<T> Iterator<T>::operator++(){
    
}

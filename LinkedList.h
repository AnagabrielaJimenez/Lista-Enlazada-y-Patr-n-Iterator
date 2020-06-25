#include <iostream>
#include "Nodo.h"

using namespace std;

template <class T>

class LinkedList{
private:
    int size;
    Nodo<T> *head;
public:
    LinkedList();
    LinkedList(T head);
    ~LinkedList();
    void insertNodo(T data);
    void print();
};

template<typename T>
LinkedList<T>::LinkedList(){
    size=0;
    head=new Nodo<T>;
}
template<typename T>
LinkedList<T>::LinkedList(T head){
    size=0;
    *(this->head)->elem=head;
}
template<typename T>
LinkedList<T>::~LinkedList(){
    delete head;
}
template<typename T>
void LinkedList<T>::insertNodo(T data){
    Nodo<T> *new_nodo = new Nodo<T>(data);
    Nodo<T> *aux=head;
    if(!head){
        head=new_nodo;
    }
    else{
        while (aux->next != NULL){
            aux=aux->next;
        }
        aux->next=new_nodo;
    }
    size++;
}
template<typename T>
void LinkedList<T>::print(){
    Nodo<T> *aux = head;
    if (!head){
        cout<<"La lista está vacía"<<endl;
    }
    else{
        while (aux){
            cout<<aux->data<<" -> ";
            if (!aux->next){
                cout<<"FIN";
            }
            aux=aux->next;
        }
    }
    cout<<endl<<endl;   
}

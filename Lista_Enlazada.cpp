#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(){
    LinkedList<int> L;
    L.insertNodo(1);
    L.insertNodo(2);
    L.insertNodo(3);
    L.insertNodo(4);
    L.print();
}
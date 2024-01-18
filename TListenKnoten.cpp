#include "TListenKnoten.h"
#include <iostream>
using namespace std;
//
// Created by dtyur on 18.01.2024.
//
char TListenKnoten::getData() const {
    return data;
}

TListenKnoten *TListenKnoten::getNext() const {
    return next;
}

void TListenKnoten::setData(char data) {
    TListenKnoten::data = data;
}

void TListenKnoten::setNext(TListenKnoten *next) {
    TListenKnoten::next = next;
}
TListenKnoten::TListenKnoten(char data, TListenKnoten *next) : data(data), next(next) {}
TListenKnoten::TListenKnoten() : data(0), next(nullptr) {}

void TListenKnoten::vorne_anfuegen(TListenKnoten *&anker, char wert) {

    TListenKnoten* neuer_eintrag = new TListenKnoten(wert, anker);
    anker = neuer_eintrag;

}
void TListenKnoten::print_list(TListenKnoten *anker) {
    TListenKnoten*current = anker;

    while(current != nullptr){
        cout << current->getData() << " ";
        current = current->getNext();
    }


}
TListenKnoten::~TListenKnoten() {
    cout<<"deleted"<<endl;
}



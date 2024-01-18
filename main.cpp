#include <iostream>
using namespace std;
#include "TListenKnoten.h"

int main() {
    TListenKnoten* anker = nullptr;

    TListenKnoten::vorne_anfuegen(anker, 'A');
    TListenKnoten::vorne_anfuegen(anker, 'B');
    TListenKnoten::vorne_anfuegen(anker, 'C');


    // Print the linked list
    TListenKnoten::print_list(anker);
    cout<<endl;

    // Don't forget to delete the allocated memory to avoid memory leaks
    while (anker != nullptr) {
        TListenKnoten* temp = anker;
        anker = anker->getNext();
        delete temp;
    }
    return 0;
}

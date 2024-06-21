#include<iostream>
#include "LinkedListADT.h"

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.print(); // Output: 10 20 30

    list.remove();
    list.print(); // Output: 10 20

    list.remove();
    list.print(); // Output: 10

    list.remove();
    list.print(); // Output: (empty line)

    list.remove(); // Output: Error: List is empty, cannot remove.

    return 0;
}

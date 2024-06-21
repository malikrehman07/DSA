#include <iostream>
#include "ListADT.h"
#include "LinkedListADT.h"
#include "ArrayADT.h"
using namespace std;

#include "ListADT.h"

int main() {
    ListADT list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.print();

    list.remove();
    list.print();

    list.remove();
    list.print();

    list.remove();
    list.print();

    list.remove();

    LinkedList Linkedlist;

    Linkedlist.insert(20);
    Linkedlist.insert(30);
    Linkedlist.print(); // Output: 10 20 30
    Linkedlist.insert(10);

    Linkedlist.remove();
    Linkedlist.print(); // Output: 10 20

    Linkedlist.remove();
    Linkedlist.print(); // Output: 10

    Linkedlist.remove();
    Linkedlist.print(); // Output: (empty line)

    Linkedlist.remove(); // Output: Error: List is empty, cannot remove.

    ArrayADT array(5); // Creating an ArrayADT with capacity 5

    array.insert(10);
    array.insert(20);
    array.insert(30);
    array.print();

    array.remove();
    array.print();

    array.remove();
    array.print();

    array.remove();
    array.print();

    array.remove();

    return 0;
}

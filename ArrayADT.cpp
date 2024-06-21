#include <iostream>
#include "ArrayADT.h"

int main() {
    ArrayADT array(5); // Creating an ArrayADT with capacity 5

    array.insert(10);
    array.insert(20);
    array.insert(30);
    array.print(); // Output: 10 20 30

    array.remove();
    array.print(); // Output: 10 20

    array.remove();
    array.print(); // Output: 10

    array.remove();
    array.print(); // Output: (empty line)

    array.remove(); // Output: Error: Array is empty, cannot remove.

    return 0;
}

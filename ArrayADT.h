#ifndef ARRAYADT_H
#define ARRAYADT_H

#include <iostream>

class ArrayADT {
private:
    int* array;
    int capacity;
    int size;

public:
    ArrayADT(int cap = 10) : capacity(cap), size(0) {
        array = new int[capacity];
    }

    ~ArrayADT() {
        delete[] array;
    }

    void insert(int value) {
        if (size >= capacity) {
            std::cout << "Error: Array is full, cannot insert." << std::endl;
            return;
        }
        array[size++] = value;
    }

    void remove() {
        if (size == 0) {
            std::cout << "Error: Array is empty, cannot remove." << std::endl;
            return;
        }
        size--; // Just reduce the size to "remove" the last element
    }

    void print() const {
        for (int i = 0; i < size; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

#endif // ARRAYADT_H

#ifndef LISTADT_H
#define LISTADT_H

#include <iostream>

class ListADT {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
    
    Node* head;

public:
    ListADT();
    ~ListADT();
    void insert(int value);
    void remove();
    void print() const;
};

#endif // LISTADT_H

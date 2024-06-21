#ifndef LISTADT_H
#define LISTADT_H

#include <iostream>

using namespace std;

class ListADT {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
    
    Node* head;

public:
    ListADT() : head(nullptr) {}
    ~ListADT() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void remove() {
        if (!head) {
            cout << "Error: List is empty, cannot remove." << endl;
            return;
        }

        if (!head->next) {
            // Only one node in the list
            delete head;
            head = nullptr;
        } else {
            // More than one node in the list
            Node* temp = head;
            while (temp->next->next) {
                temp = temp->next;
            }
            // Now temp is the second-to-last node
            delete temp->next;
            temp->next = nullptr;
        }
    }

    void print() const {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

#endif // LISTADT_H

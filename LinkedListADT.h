#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class LinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };
    
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
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
            std::cout << "Error: List is empty, cannot remove." << std::endl;
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
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

#endif // LINKEDLIST_H

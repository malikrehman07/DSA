#include<iostream>
#include "ArrayADT2.h"
using namespace std;
ListADT::ListADT() : head(nullptr) {}

ListADT::~ListADT() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void ListADT::insert(int value) {
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

void ListADT::remove() {
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

void ListADT::print() const {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
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
    return 0;
}
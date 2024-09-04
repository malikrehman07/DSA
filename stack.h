// Stack.h
#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct Stack {
    int items[10];
    int top;

    Stack() : top(-1) {}

    void push(int value) {
        if (top == 9) {
            cout << "Stack is full!" << endl;
        } else {
            items[++top] = value;
            cout << value << " pushed to stack" << endl;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return items[top--];
        }
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return items[top];
        }
    }
};

#endif

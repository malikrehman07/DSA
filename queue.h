// Queue.h
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

struct Queue {
    int items[10];
    int front, rear;

    Queue() : front(0), rear(-1) {}

    void enqueue(int value) {
        if (rear == 9) {
            cout << "Queue is full!" << endl;
        } else {
            items[++rear] = value;
            cout << value << " enqueued to queue" << endl;
        }
    }

    int dequeue() {
        if (front > rear) {
            cout << "Queue is empty!" << endl;
            return -1;
        } else {
            return items[front++];
        }
    }

    int peek() {
        if (front > rear) {
            cout << "Queue is empty!" << endl;
            return -1;
        } else {
            return items[front];
        }
    }
};

#endif

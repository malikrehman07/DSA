// main.cpp
#include "Stack.h"
#include "Queue.h"
#include <iostream>

int main() {
    Queue queue;

    // Queue operations
    queue.enqueue(30);
    queue.enqueue(40);
    std::cout << "Front element is " << queue.peek() << std::endl;
    std::cout << queue.dequeue() << " dequeued from queue" << std::endl;

    return 0;
}

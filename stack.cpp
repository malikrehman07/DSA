// main.cpp
#include "Stack.h"
#include "Queue.h"
#include <iostream>

int main() {
    Stack stack;
    // Stack operations
    stack.push(10);
    stack.push(20);
    std::cout << "Top element is " << stack.peek() << std::endl;
    std::cout << stack.pop() << " popped from stack" << std::endl;

    return 0;
}

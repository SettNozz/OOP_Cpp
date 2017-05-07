#include <iostream>
#include "Stack.h"
int main(void) {
    Stack<int> first_stack;
    first_stack.push(10);
    std::cout << first_stack.pop()  << std::endl;
    first_stack.push(20);
    first_stack.push(100500);
    std::cout << first_stack.pop()  << std::endl << first_stack.pop() << std::endl << first_stack.pop() << std::endl;
    return 0;
}
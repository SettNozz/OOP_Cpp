#include <iostream>
#include "Stack.h"
int main(void) {
    Stack<int> first_stack;
    std::cout << "Let's add some element to our stack(10, 90, 100500): " << std::endl;
    first_stack.push(10);
    first_stack.push(90);
    first_stack.push(100500);
    std::cout << "Check \"peek\" function: " << std::endl;
    std::cout << first_stack.peek()  << std::endl;
    std::cout << "Check \"pop\" function: " << std::endl;
    std::cout << first_stack.pop()  << std::endl;
    std::cout << "Check len of our stack: " << std::endl;
    std::cout << first_stack.len_stack()  << std::endl;
    std::cout << "Now, print stack: " << std::endl;
    first_stack.print();
    std::cout << "Now, clear stack, and show len: " << std::endl;
    first_stack.clear();
    std::cout << first_stack.len_stack()  << std::endl;
    return 0;
}
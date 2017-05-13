#include <iostream>
#include <stack>

int main() {
    std::cout << "Stack implementation." << std::endl;
    std::stack<int> f_s; //create stack object
    std::cout << "Let's push some element's: " << std::endl;
    f_s.push(5); //push element
    std::cout << "push 5" << std::endl;
    f_s.push(100500); // push element
    std::cout << "100500 is push NOW!" << std::endl;
    f_s.pop(); // delete top element
    std::cout << "Now, we are delete element of a head." << std::endl;
    std::cout << "After all of operations, we are convinced of the correctness of the work of our stack!" << std::endl;
    std::cout << "Size of our stack is: " << f_s.size() << std::endl; //size of stack
    std::cout << "Press any kay to continue :)" << std::endl;
    std::cin.get();
    return 0;
}
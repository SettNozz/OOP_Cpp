#include "My_stack.h"
#include <stack>
#include <iostream>

std::stack<int> first_stack;

template <class item_type>
My_stack<item_type>::My_stack():ptop_(NULL) {

}

template <class item_type>
My_stack<item_type>::~My_stack(){

}

template <class item_type>
bool My_stack<item_type>::is_empty() {
    return first_stack.empty();
}

template <class item_type>
int My_stack<item_type>::len_stack(){
    return first_stack.size();
}

template <class item_type>
void My_stack<item_type>::push(const item_type &nodedata){
    first_stack.push(nodedata);
}

template <class item_type>
void My_stack<item_type>::pop() {
    first_stack.pop();
}

template <class item_type>
void My_stack<item_type>::peek() {
    first_stack.top();
}


template <class item_type>
void My_stack<item_type>::clear() {
    while (!is_empty()){
        first_stack.pop();
    }
}

template <class item_type>
void My_stack<item_type>::print() {
    while (!is_empty()) {
        std::cout << first_stack.top() << ' ';
        first_stack.pop();
    }
}

template class My_stack<int>;
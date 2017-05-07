#include "Stack.h"
#include <iostream>

template <class item_type>
Stack<item_type>::Stack():ptop_(NULL) {

}

template <class item_type>
Stack<item_type>::~Stack(){

}

template <class item_type>
bool Stack<item_type>::is_empty() {
    return ptop_ == NULL ? true : false;
}

template <class item_type>
int Stack<item_type>::len_stack() {

}

template <class item_type>
item_type Stack<item_type>::peek() {
    if(!is_empty()){
        return ptop_->nodedata_;
    } else
        return NULL;
}

template <class item_type>
void Stack<item_type>::push(const item_type &nodedata) {
    stacknode *pnewnode = new stacknode(nodedata);
    pnewnode->pnext_ = ptop_;
    ptop_ = pnewnode;
}

template <class item_type>
item_type Stack<item_type>::pop() {
    std::string str_exception = "it's an empty stack.";
    try{
        if(!is_empty()){
            item_type t = ptop_->nodedata_;
            stacknode *pretop = ptop_;
            ptop_ = ptop_->pnext_;
            delete pretop;
            return t;
        }else{
            throw str_exception;
        }
    }
    catch(...)
    {
        std::cout << str_exception << std::endl;
    }
}

template <class item_type>
void Stack<item_type>::clear() {

}

template <class item_type>
void Stack<item_type>::print() {

}

template class Stack<int>;
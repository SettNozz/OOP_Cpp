#ifndef LAB_5_STACK_H
#define LAB_5_STACK_H


#include <iostream>

template <class item_type> class Stack {
public:
    Stack();
    ~Stack();
    bool is_empty();
    int len_stack();
    item_type peek();
    void push(const item_type& nodedata);
    item_type pop();
    void clear();
    void print();
private:
    struct stacknode
    {
        item_type nodedata_;
        stacknode* pnext_;
        stacknode(const item_type& nodedata)
        {
            nodedata_ = nodedata;
            pnext_ = NULL;
        }
    };

    stacknode* ptop_;
};


#endif //LAB_5_STACK_H

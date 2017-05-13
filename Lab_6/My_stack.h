#ifndef LAB_6_MY_STACK_H
#define LAB_6_MY_STACK_H

#include <iostream>
#include <stack>

template <class item_type> class My_stack {
public:
    My_stack();
    ~My_stack();
    void push(const item_type& nodedata);
    item_type pop();
    item_type peek();
    bool is_empty();
    int len_stack();
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
    int len = 0;
};



#endif //LAB_6_MY_STACK_H

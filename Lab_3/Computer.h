//
// Created by settnozz on 30.03.17.
//

#ifndef LAB_3_COMPUTER_H
#define LAB_3_COMPUTER_H

#include <string>

using namespace std;



class Computer {
protected:
    string mother_plate;
    int size_ozu;
    string type_comp;
public:
    Computer();
    Computer(const string, const int, const string);
    virtual ~Computer();
    virtual void set_mother_plate(string);
    virtual void set_size_ozu(int);
    virtual void set_type_comp(string);
    virtual void show() const;
};


#endif //LAB_3_COMPUTER_H

//
// Created by settnozz on 30.03.17.
//

#ifndef LAB_3_PERSONAL_COMP_H
#define LAB_3_PERSONAL_COMP_H


#include "Computer.h"

class Personal_comp : public Computer{
private:
    string video_card;
public:
    Personal_comp();
    //Personal_comp(const string, const int, const string, const string);
    ~Personal_comp();
    void set_video_card(string);
    void show() const;
};


#endif //LAB_3_PERSONAL_COMP_H

//
// Created by settnozz on 30.03.17.
//

#include <iostream>
#include "Personal_comp.h"

//Personal_comp::Personal_comp(const string mp, const int ozu, const string tc, const string vc):
//        Computer(mp, ozu, tc), video_card(vc){}


Personal_comp::Personal_comp(){}

Personal_comp::~Personal_comp(){}

void Personal_comp::set_video_card(string video_car) {
    video_card = video_car;
}

void Personal_comp::show() const{
    std::cout << "For personal computer: " << std::endl;
    Computer::show();
}
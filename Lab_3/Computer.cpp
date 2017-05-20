//
// Created by settnozz on 30.03.17.
//

#include <iostream>
#include "Computer.h"


//Computer::Computer(const string mp, const int ozu, const string tc):mother_plate(mp), size_ozu(ozu), type_comp(tc) {

//}

Computer::Computer(){}

Computer::~Computer() {}

void Computer::set_mother_plate(string mother_pl) {
    mother_plate = mother_pl;
}

void Computer::set_size_ozu(int ozu_size) {
    size_ozu = ozu_size;
}

void Computer::set_type_comp(string type_computer) {
    type_comp = type_computer;
}

void Computer::show() const {
    std::cout << "Name of mother plate is: " << mother_plate << std::endl;
    std::cout << "Size of ozu is: " << size_ozu << std::endl;
    std::cout << "Type of computer is: " << type_comp << std::endl;
}
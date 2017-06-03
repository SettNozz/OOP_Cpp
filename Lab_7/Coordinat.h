//
// Created by settnozz on 20.05.17.
//

#ifndef LAB_7_COORDINAT_H
#define LAB_7_COORDINAT_H

#include <string>
#include <iostream>


struct gradus{
    double degrees;
    double minutes;
    double seconds;
    std::string let;
};

class Coordinat {
private:
    gradus q_; //ширина
    gradus a_; //долгота
public:
    Coordinat();
    ~Coordinat();
    void set_coordinats_q();
    void set_coordinates_a();
    void print_coord();
};


#endif //LAB_7_COORDINAT_H

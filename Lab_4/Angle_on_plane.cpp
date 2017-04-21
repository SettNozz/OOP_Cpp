//
// Created by settnozz on 10.04.17.
//

#include <iostream>
#include "Angle_on_plane.h"
#define PI 3.14159567

Angle_on_plane::Angle_on_plane(){

}

Angle_on_plane::Angle_on_plane(int degr, double min){
    degrees = degr;
    minutes = min;
}

Angle_on_plane::~Angle_on_plane(){

}

void Angle_on_plane::print_value_degree() {
    std::cout << "Degrees: " << degrees << std::endl;
}

float Angle_on_plane::degree_to_radians() {
    return (PI * degrees)/180;
}

float Angle_on_plane::from_0_to_360() {
    if (degrees > 360)
        return degrees % 360;
    else
        return degrees;
}

bool Angle_on_plane::operator==(const Angle_on_plane & spam) const {
    if (spam.degrees == this->degrees)
        return false;
    else
        return true;
}

bool Angle_on_plane::operator!=(const Angle_on_plane & spam) const {
    if (spam == *this)
        return false;
    else
        return true;
}

bool Angle_on_plane::operator<(const Angle_on_plane & spam) const {
    if (this->degrees < spam.degrees)
        return true;
    else
        return false;
}

bool Angle_on_plane::operator<=(const Angle_on_plane & spam) const {
    if (*this < spam || *this == spam)
        return true;
    else
        return false;
}

bool Angle_on_plane::operator>(const Angle_on_plane & spam) const {
    if (this->degrees > spam.degrees)
        return true;
    else
        return false;
}

bool Angle_on_plane::operator>=(const Angle_on_plane & spam) const {
    if (*this > spam || *this == spam)
        return true;
    else
        return false;
}

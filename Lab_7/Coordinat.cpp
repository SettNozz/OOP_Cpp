//
// Created by settnozz on 20.05.17.
//

#include "Coordinat.h"
#include "Exeption.h"

Coordinat::Coordinat() {

}

Coordinat::~Coordinat() {

}

//shirota
void Coordinat::set_coordinats_q() {
    std::cout << "Enter your coordinats." << std::endl;
    std::cout << "Degrees: ";
    try {
        std::cin >> q_.degrees;
        if (q_.degrees < -90 || q_.degrees > 90){
            throw Exeption();
        }
        std::cout << "Minutes: ";
        std::cin >> q_.minutes;
        std::cout << "Seconds: ";
        std::cin >> q_.seconds;
        std::cout << "Side: ";
        std::cin >> q_.let;
        }
catch(Exeption & ex){
    std::cout << "Input data is incorrect." << std::endl;
    }
}

void Coordinat::set_coordinates_a() {
    std::cout << "Enter your coordinats." << std::endl;
    std::cout << "Degrees: ";
    try {
        std::cin >> a_.degrees;
        if (a_.degrees < -180 || a_.degrees > 180) {
            throw Exeption();
        }
        std::cout << "Minutes: ";
        std::cin >> a_.minutes;
        std::cout << "Seconds: ";
        std::cin >> a_.seconds;
        std::cout << "Side: ";
        std::cin >> a_.let;
    }
        catch(Exeption & ex) {
            std::cout << "Input data is incorrect." << std::endl;
        }
}

void Coordinat::print_coord() {
    std::cout << "_\t Shirina \t_" << std::endl;
    std::cout << "Degrees: " << q_.degrees << std::endl;
    std::cout << "Munutes: " << q_.minutes << std::endl;
    std::cout << "Seconds: " << q_.seconds << std::endl;
    std::cout << "Side: " << q_.let << std::endl;
    std::cout << "_\t Dolgota \t_" << std::endl;
    std::cout << "Degrees: " << a_.degrees << std::endl;
    std::cout << "Munutes: " << a_.minutes << std::endl;
    std::cout << "Seconds: " << a_.seconds << std::endl;
    std::cout << "Side: " << a_.let << std::endl;

}
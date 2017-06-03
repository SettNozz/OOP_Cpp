#include <iostream>
#include "Coordinat.h"

int main() {
    std::cout << "Coordinates labs.с" << std::endl;
    Coordinat ct;
    ct.set_coordinats_q();
    ct.set_coordinates_a();
    ct.print_coord();
    return 0;
}
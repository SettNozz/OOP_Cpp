#include <iostream>
#include "Angle_on_plane.h"

int main() {
    Angle_on_plane obj1(467, 23);
    Angle_on_plane obj2(30, 23);
    obj1.print_value_degree();
    std::cout << "Value of radians is: " << obj1.degree_to_radians() << std::endl;
    std::cout << "Value of degrees (0-360) is: " << obj1.from_0_to_360() << std::endl;
    obj2.print_value_degree();
    std::cout << "Value of radians is: " << obj2.degree_to_radians() << std::endl;
    std::cout << "Value of degrees (0-360) is: " << obj2.from_0_to_360() << std::endl;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
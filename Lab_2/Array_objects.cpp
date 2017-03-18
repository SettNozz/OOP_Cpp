#include "Array_objects.h"
//#include "PC.h"

Array_objects::Array_objects() {
    computers[0] = new PC("Illya","Intel CORE i5", "ATX", 1000, 8000, "GeForce GTX 1050", "No");
    computers[1] = new PC("Dmitro", "Pentium", "ASRock H110M-DGS", 500, 400, "Benchmark r7 360", "Yes");
    computers[2] = new PC("Vitaliy", "Intel CORE i7", "NLX", 2000, 2048, "MSI PCI-Ex GeForce GTX 1060", "No");
    computers[3] = new PC("Anton", "Intel CORE i3", "Flex ATX", 1500, 250, "PCI-Ex Radeon RX 460", "No");
    computers[4] = new PC("Nick", "Intel CORE 2 Duo", "Mini ATX", 250, 1024, "Gigabyte PCI-Ex GeForce GT 420", "Yes");
}

Array_objects::~Array_objects() {
        delete[] computers;
        std::cout << "Bye, computers :) " << std::endl;
}

void Array_objects::show_hdd_ozu(int hdd_size, int ozu_size) {
    std::cout << "Show, what computers have HDD size > 600gb and OZU size > 1026mb" << std::endl;
    for (int i = 0; i < m; i++) {
        if (((computers[i]->get_size_hdd()) > hdd_size) && (((computers[i]->get_size_ozu()) > ozu_size))) {
            std::cout << "Owner of pc is: " << computers[i]->get_user_name() << std::endl;
            std::cout << "Name of processor is: " << computers[i]->get_proc() << "; Size of HDD is: " <<
                      computers[i]->get_size_hdd() << "; Size of OZU is:" << computers[i]->get_size_ozu() << std::endl;

        }
    }
    std::cout << "****************************************************************" << std::endl;
}

void Array_objects::show_no_dvd(string answer) {
    std::cout << "Show, what computers has NO DVD" << std::endl;
    for (int i = 0; i < m; i++) {
        if (computers[i]->get_dvd() == answer){
            std::cout << "Owner of pc is: " << computers[i]->get_user_name() << std::endl;
            std::cout << "Name of processor is: " << computers[i]->get_proc() <<
                 "; The presence of DVD:" << computers[i]->get_dvd() << std::endl;
        }
    }
    std::cout << "****************************************************************" << std::endl;
}

void Array_objects::show_proc(string name_processor) {
    std::cout << "Show, what computers has name of processor \"" << name_processor << "\"" << std::endl;
    for (int i = 0; i < m; i++) {
        if (computers[i]->get_proc() == name_processor) {
            std::cout << "Owner of pc is: " << computers[i]->get_user_name() << std::endl;
            std::cout << computers[i]->get_proc() << std::endl;
        }
    }
    std::cout << "****************************************************************" << std::endl;
}
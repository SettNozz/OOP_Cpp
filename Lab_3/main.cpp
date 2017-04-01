#include <iostream>
#include "Personal_comp.h"
#include "Server.h"

void init_base_class(string *mother_plata, int *ozu_size, string *type_computer){ //Computer *base,
    std::cout << "Enter name of mother plate: ";
    std::cin >> *mother_plata;
    std::cout << "Enter size of your OZU: ";
    std::cin >> *ozu_size;
    std::cout << "Enter type of computer (notebook, pc): ";
    std::cin >> *type_computer;
    //base->set_mother_plate(*mother_plata);
    //base->set_size_ozu(*ozu_size);
    //base->set_type_comp(*type_computer);
}


void init_array(Computer *arr_ptr[], int num){
    string mot_plate, type_pc, video_card;
    int ozu_size, count_prc, count_hdd, choice;
    for(int i = 0; i < num; ++i) {
        std::cout << "Enter witch object you want to create. 1) Server; 2)Personal computer: ";
        std::cin >> choice;
        switch (choice){
            case 1:{
                //Server serv;
                std::cout << "Now, you have created \"Server\" object. Please, init fields:" << std::endl;
                //init_base_class(&serv, &mot_plate, &ozu_size, &type_pc);
                init_base_class(&mot_plate, &ozu_size, &type_pc);
                std::cout << "Enter count of your processors: ";
                std::cin >> count_prc;
                std::cout << "Enter count of your HDD/SSD: ";
                std::cin >> count_hdd;
                arr_ptr[i] = new Server(mot_plate, ozu_size, type_pc, count_prc, count_hdd);
                //serv.set_count_processors(count_prc);
                //serv.set_count_hard_drive(count_hdd);
                //Computer *ptr = &serv;
                //arr_ptr[i] = ptr;
                break;
            }
            case 2:{
                Personal_comp pc;
                std::cout << "Now, you have created \"Personal computer\" object. Please, init fields: " << std::endl;
                //init_base_class(&pc,&mot_plate, &ozu_size, &type_pc);
                init_base_class(&mot_plate, &ozu_size, &type_pc);
                std::cout << "Enter name of video card: ";
                std::cin >>  video_card;
                arr_ptr[i] = new Personal_comp(mot_plate, ozu_size, type_pc, video_card);
                //pc.set_video_card(video_card);
                //Computer *ptr = &pc;
                //arr_ptr[i] = ptr;
                break;
            }
            default:{
            std::cout << "Your input data is incorrect. Please, try again!" << std::endl;
                break;
            }
        }
    }
}

int main() {
    const int num = 2;
    Computer *array_prt[num];
    init_array(array_prt, num);
    //std::cout << "HOLA" << std::endl;
    for (int i = 0; i < num; ++i){
        //std::cout << "In LOOP" << std::endl;
        array_prt[i]->show();
    }
    return 0;
}
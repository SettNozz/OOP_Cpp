#ifndef LAB_1_PC_H
#define LAB_1_PC_H

#include <string.h>
#include <iostream>
#include <string>

using namespace std;

class PC {
private:
    string name_user; //name of user
    string proc; //name of processor
    string mother_plate; //name of m.p.
    unsigned int size; //size of HDD/SSD
    unsigned int ozu; //size of OZU
    string video_card; //name of video card
    string DVD; //DVD (Yes or No)

public: //class consructor
    PC(string user_name, string name_proc, string name_mp, unsigned int size_hdd,
       unsigned int size_ozu, string name_video_card, string if_DVD):
            proc(name_proc), mother_plate(name_mp),
            size(size_hdd), ozu(size_ozu), video_card(name_video_card), DVD(if_DVD){

        name_user = user_name;
        proc = name_proc;
        mother_plate = name_mp;
        video_card = name_video_card;
        DVD = if_DVD;
        }
    ~PC(){ //destructor of class
        std::cout << "Bye, dear class :(. ";
    }

    inline void set_user_name(string);
    string get_user_name();
    inline void set_proc(string);
    string get_proc();
    inline void set_mp(string);
    string get_mp();
    inline void set_size_hdd(unsigned int);
    unsigned int get_size_hdd();
    inline void set_size_ozu(unsigned int);
    unsigned int get_size_ozu();
    inline void set_video_card(string);
    string get_name_video_card();
    inline void set_dvd(string);
    string get_dvd();
    inline void show_pc();
};
#endif //LAB_1_PC_H

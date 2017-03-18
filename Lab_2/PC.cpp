#include "PC.h"
#include <iostream>
#include <string>

using namespace std;

inline void PC::set_user_name(string user_name) {
    this->name_user = user_name;
}

string PC::get_user_name() { return name_user;}

inline void PC::set_proc(string name_proc) {
    this->proc = name_proc;
}

string PC::get_proc() {return proc;}

inline void PC::set_mp(string name_mp) {
    this->mother_plate = name_mp;
}

string PC::get_mp() {return mother_plate;}

inline void PC::set_size_hdd(unsigned int size_hdd) {
    this->size = size_hdd;
}

unsigned int PC::get_size_hdd() {return size;}

inline void PC::set_size_ozu(unsigned int size_ozu) {
    this->ozu = size_ozu;
}

unsigned int PC::get_size_ozu() {return ozu;}

inline void PC::set_video_card(string name_video_card) {
    this->video_card = video_card;
}

string PC::get_name_video_card() {return video_card;}

inline void PC::set_dvd(string if_DVD) {
    this->DVD = if_DVD;
}

string PC::get_dvd() {return DVD;}

inline void PC::show_pc() {
    cout << "Name of your processor is: " << proc << endl << "Name of mother_plate is: " << mother_plate << endl
         << "Size of HDD: " << size << endl << "Size of OZU is: " << ozu << endl
         << "Name of video_card is: " << video_card << endl << "DVD is: " << DVD << endl;
    cout << "****************************" << endl;
}

#include <iostream>
#include <cstring>
#include "public_transport.h"

using namespace std;

void public_transport::set_number(unsigned int number_taxi){
    number = number_taxi;
}

void public_transport::set_time(unsigned int time_road){
    time = time_road;
}

void public_transport::set_name_start(char *start_name){
    if (start_name != NULL){
    delete [] name_start;
    name_start = new char[strlen(start_name)];
    }
    strcpy(name_start, start_name);
}

void public_transport::set_name_end(char *end_name){
    if (end_name != NULL){
        delete [] name_end;
        name_end = new char[strlen(end_name)];
    }
    strcpy(name_end, end_name);
}

void public_transport::print(){
    cout << "The taxi number is: " << number << endl << "The name of station(start) is: "<< name_start << endl;
    cout << "The name of station(end) is: " << name_end << endl << "Time in road: " << time << endl;
}

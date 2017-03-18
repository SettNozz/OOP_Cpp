#pragma once
#ifndef C_LABS_OOP_PUBLIC_TRANSPORT_H
#define C_LABS_OOP_PUBLIC_TRANSPORT_H

#include "string.h"


class public_transport {
private:
    unsigned int number;
    unsigned int time;   //number of transport, time in road
    char *name_start;
    char *name_end; //name of station(start, end)
public:     //constructor of class
    public_transport(unsigned int num, unsigned int tim, char *name_start_st, char *name_end_st):number(num), time(tim), name_start(name_start_st), name_end(name_end_st){
        name_start = new char[strlen(name_start_st)];
        strcpy(name_start, name_start_st);
        name_end = new char[strlen(name_end_st)];
        strcpy(name_end, name_end_st);
    }
    ~public_transport(){   //destructor of class
        delete [] name_start;
        delete [] name_end;
    }


    void set_number(unsigned int );
    unsigned int get_number(){ return number;};
    void set_time(unsigned int);
    unsigned int get_time(){ return time;};
    void set_name_start(char *);
    char *get_name_start(){ return name_start;};
    void set_name_end(char *);
    char *get_name_end(){ return name_end;};
    void print();


};


#endif //C_LABS_OOP_PUBLIC_TRANSPORT_H

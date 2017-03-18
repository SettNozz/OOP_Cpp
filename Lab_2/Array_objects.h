#ifndef LAB_1_ARRAY_OBJECTS_H
#define LAB_1_ARRAY_OBJECTS_H

#include "PC.h"

const int m = 5;

class Array_objects {
private:
    //const int n = 5;
public:
    Array_objects();
    ~Array_objects();

    void show_hdd_ozu(int, int);
    void show_no_dvd(string);
    void show_proc(string);
    PC *computers[m];
};

#endif //LAB_1_ARRAY_OBJECTS_H

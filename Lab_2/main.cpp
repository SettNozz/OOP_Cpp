#include "PC.h"
#include "Array_objects.h"

int main() {
    Array_objects *comps = new Array_objects;
    comps->show_hdd_ozu(600, 1026);
    comps->show_no_dvd("No");
    comps->show_proc("Intel CORE i5");
    return 0;
}
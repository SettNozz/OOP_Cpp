#include <iostream>
#include "public_transport.h"

int main(){
    public_transport Taxi(1, 2, "Valera", "Gaga");
    Taxi.print();
    Taxi.set_number(10);
    Taxi.set_time(20);
    Taxi.set_name_start("Polova");
    Taxi.set_name_end("Cyrcis");
    Taxi.print();
    return 0;
}

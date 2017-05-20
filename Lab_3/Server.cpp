//
// Created by settnozz on 30.03.17.
//

#include <iostream>
#include "Server.h"

//Server::Server(const string mp, const int ozu, const string tc, const int cp, const int ch):
//        Computer(mp, ozu, tc), count_processors(cp), count_hard_drive(ch){}

Server::Server(){}

Server::~Server(){}

void Server::set_count_processors(int count_proc){
    count_processors = count_proc;
}

void Server::set_count_hard_drive(int count_hd) {
    count_hard_drive = count_hd;
}

void Server::show() const{
    std::cout << "For server is: " << std::endl;
    Computer::show();
}
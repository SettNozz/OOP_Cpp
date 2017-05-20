//
// Created by settnozz on 30.03.17.
//

#ifndef LAB_3_SERVER_H
#define LAB_3_SERVER_H


#include "Computer.h"

class Server : public Computer{
private:
    int count_processors;
    int count_hard_drive;
public:
    //Server(const string, const int, const string, const int, const int);
    Server();
    ~Server();
    void set_count_processors(int);
    void set_count_hard_drive(int);
    void show() const;
};


#endif //LAB_3_SERVER_H

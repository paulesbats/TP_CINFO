#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <iostream>
#include <string.h>
#include "notifiercollision.h"

class Personnage:public NotifierCollision
{
private:
    int pos_x;
    int pos_y;
public:
    Personnage();
    std::string new_pos();
    int set_pos(int pos_x, int pos_y);
};

#endif // PERSONNAGE_H

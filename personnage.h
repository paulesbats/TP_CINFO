#pragma once
#include <string>
#include "notifiercollision.h"

class Personnage:public NotifierCollision
{
private:
    int pos_x;
    int pos_y;
    std::string deplacement;
public:
    Personnage();
    int new_pos(int pos_x, int pos_y);
    void setDeplacement();
    int getpos_x();
    int getpos_y();
};


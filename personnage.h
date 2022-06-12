#pragma once
#include <string>
#include "notifiercollision.h"
#include "interactive.h"
#include "observercollision.h"

class Personnage:public NotifierCollision,public ObserverCollision,public Interactive
{
private:
    std::string deplacement;
public:
    Personnage(int pos_x, int pos_y, Background* background);
    void new_pos(int pos_x, int pos_y);
    void setDeplacement(std::string move);
    void update_pos();
    bool test_collision(int x,int y);
    void collision(NotifierCollision* notifieur);

};

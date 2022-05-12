#ifndef ENNEMI_H
#define ENNEMI_H
#include "observercollision.h"

class Ennemi:public ObserverCollision
{
private:
int pos_x;
int pos_y;


public:
void deplacer(int x,int y);
virtual void new_pos()=0;
}
;

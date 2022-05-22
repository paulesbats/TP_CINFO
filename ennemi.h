#define ENNEMI_H
#include <iostream>
#include "observercollision.h"
#include "notifiercollision.h"

class Ennemi:public ObserverCollision ,public NotifierCollision
{
private:
int pos_x;
int pos_y;


public:
Ennemi();
void deplacer(int x,int y);
virtual void new_pos()=0;
void collision(NotifierCollision notifieur);



};

#ifndef ENNEMI_H
#define ENNEMI_H
#include <iostream>
#include "observercollision.h"
#include "notifiercollision.h"
#include "regularmove.h"

class Ennemi:public ObserverCollision ,public NotifierCollision, public RegularMove
{
private:
int pos_x=0;
int pos_y=0;


public:

Ennemi(int x, int y, Background* background);
void deplacer(int x,int y);
virtual void new_pos()=0;
void collision(NotifierCollision notifieur);
void update_pos();
bool test_collision(int x, int y);
int getpos_x();
int getpos_y();

};
#endif

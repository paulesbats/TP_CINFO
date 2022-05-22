#include "personnage.h"
#include "notifiercollision.h"
#include <iostream>
#include <string>

Personnage::Personnage()
{

}
int Personnage::new_pos(int pos_x, int pos_y){
     NotifierCollision notify();
     return pos_x, pos_y;
}
void Personnage::setDeplacement(std::string move){
    deplacement = move;
    notify();
}

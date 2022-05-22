#include "personnage.h"
#include "notifiercollision.h"
#include <iostream>
#include <string>

Personnage::Personnage()
{

}
int Personnage::new_pos(int pos_x, int pos_y){
     NotifierCollision notify();
<<<<<<< HEAD
     return pos_x , pos_y;
=======
     return pos_x, pos_y;
>>>>>>> 7ffbc83ce96f238bf290546a318e671ac893f19f
}
void Personnage::setDeplacement(std::string move){
    deplacement = move;
    notify();
}
int Personnage::getpos_x(){
    return pos_x;
}
int Personnage::getpos_y(){
    return pos_y;
}

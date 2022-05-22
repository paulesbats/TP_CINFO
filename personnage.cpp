#include "personnage.h"
#include "notifiercollision.h"
#include "observercollision.h"
#include <iostream>
#include <string>

Personnage::Personnage()
{

}
int Personnage::new_pos(int pos_x, int pos_y){
     NotifierCollision notify();

     return pos_x , pos_y;

     return pos_x, pos_y;

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
void Personnage::collision(NotifierCollision notifieur){
    if (test_collision(pos_x,pos_y)){
        std::cout<<"il y a eu une collision"<<std::endl;
    }
}

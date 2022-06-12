#include "personnage.h"
#include "notifiercollision.h"
#include <iostream>
#include <string>
#include "observercollision.h"

Personnage::Personnage(int pos_x, int pos_y, Background* background)
    :NotifierCollision(),ObserverCollision(),Interactive(pos_x, pos_y, background)
{

}
void Personnage::new_pos(int pos_x, int pos_y){}


void Personnage::update_pos(){
    positionner(pos_x, pos_y);
    notify(pos_x, pos_y);
}

bool Personnage::test_collision(int x, int y){
    if(x==pos_x && y==pos_y ){
        return true;
    }
    else{
        return false;
    }
}
void Personnage::collision(NotifierCollision* notifieur)
{
    std::cout << "Collision Personnage" << std::endl;
}

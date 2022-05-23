#include "personnage.h"
#include "notifiercollision.h"
#include "observercollision.h"
#include <iostream>
#include <string>

Personnage::Personnage()
    :NotifierCollision()
{

}
int Personnage::new_pos(int pos_x, int pos_y){
     NotifierCollision notify();
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 1a94dd9b347360118ce0fc6b61d026d6c6dd47c5

     return pos_x , pos_y;

     return pos_x, pos_y;

     return pos_x , pos_y;

     return pos_x, pos_y;
<<<<<<< HEAD
>>>>>>> 0a2dc7ce6d8d6bbdbbd9839633d1c12628f64259
=======

     return pos_x , pos_y;


>>>>>>> pastille
=======

>>>>>>> 1a94dd9b347360118ce0fc6b61d026d6c6dd47c5
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

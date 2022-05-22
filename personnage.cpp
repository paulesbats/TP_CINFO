#include "personnage.h"
#include "notifiercollision.h"
#include <iostream>
#include <string.h>

Personnage::Personnage()
{

}
std::string personnage::new_pos(){
     NotifierCollision notify();
}
void personnage::setDeplacement(std::string move){
    deplacement = move ;
}

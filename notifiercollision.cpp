#include "notifiercollision.h"
#include "observercollision.h"
#include <string>

NotifierCollision::NotifierCollision()

{

}
void NotifierCollision::notify(){
    if (test_collision(getpos_x(),getpos_y()){
            std::cout<<"il y a collision"<<std::endl;
    }
    else {
            std::cout<<"pas de collision"<<std::endl;
    }
std::string NotifierCollision::notify(int x,int y){
    test_collision(int x,int y);
}

// coucou

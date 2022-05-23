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
<<<<<<< HEAD
std::string NotifierCollision::notify(int x,int y){
    test_collision(int x,int y);
=======
>>>>>>> 0e6aa519b3134b66949062e606b4b6200db0e39c
}

// coucou

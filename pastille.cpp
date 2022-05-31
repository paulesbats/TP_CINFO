#include "pastille.h"
#include <iostream>



Pastille::Pastille()
    :DrawableElem(),ObserverCollision()
{
void Pastille::collision(NotifierCollision notifieur){
    if (test_collision(pos_x,pos_y)){
        std::cout<<"il y a eu une collision"<<std::endl;
        }
    }


}

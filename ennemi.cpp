#include "ennemi.h"
#include <iostream>
Ennemi::Ennemi()
{


}
void Ennemi::collision(NotifierCollision notifieur){
    if (test_collision(pos_x,pos_y)){
        std::cout<<"il y a eu une collision"<<std::endl;
    }
}
void Ennemi::deplacer(int x,int y){
    pos_x= pos_x +x;
    pos_y=pos_y+ y;
    notify(pos_x,pos_y);

}

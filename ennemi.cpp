#include "ennemi.h"
#include <iostream>
#include <random>
Ennemi::Ennemi()
    :ObserverCollision(),NotifierCollision()
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
    notify();
}

void Ennemi::update_pos(){
<<<<<<< HEAD

=======
>>>>>>> 0f053eb6cb66796ee310baa9ae28dcf36b8cb936
std::random_device rd;   // non-deterministic generator
std::mt19937 gen(rd());
pos_x= pos_x +gen();
pos_y=pos_y+ gen();
notify();
<<<<<<< HEAD

}
int Ennemi::getpos_x(){
  return pos_x;

}
int Ennemi::getpos_y(){
    return pos_y;

=======
>>>>>>> 0f053eb6cb66796ee310baa9ae28dcf36b8cb936
}

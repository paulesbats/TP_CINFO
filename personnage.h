#ifndef PERSONNAGE_H
#define PERSONNAGE_H
<<<<<<< HEAD
#include <iostream>
#include <string.h>
#include "notifiercollision.h"

class Personnage:public NotifierCollision
{
private:
    int pos_x;
    int pos_y;
public:
    Personnage();
    std::string new_pos();
    int set_pos(int pos_x, int pos_y);
};
=======
>>>>>>> origin/master

#endif // PERSONNAGE_H
#include <string.h>
#include <iostream>
class personnage
       {
  private :
    int pos_x;
    int pos_y;
    std::string deplacement;


public :
    void setDeplacement(std::string move);
    std::string new_pos();







};

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

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

#include <string>
#include "notifiercollision.h"
#include "interactive.h"

class Personnage:public NotifierCollision, Interactive
{
private:
    std::string deplacement;
public:
    Personnage();
    int new_pos(int pos_x, int pos_y);
    void setDeplacement();
    int getpos_x();
    int getpos_y();
};


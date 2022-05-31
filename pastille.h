#ifndef PASTILLE_H
#define PASTILLE_H
#include "drawableelem.h"
#include "observercollision.h"

class Pastille: public DrawableElem,public ObserverCollision
{

public:
    Pastille();
    void collision(NotifierCollision notifieur);
    bool test_collision(int x, int y);

};

#endif // PASTILLE_H

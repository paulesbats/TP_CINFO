#ifndef PASTILLE_H
#define PASTILLE_H
#include "drawableelem.h"
#include "observercollision.h"

class Pastille: public DrawableElem,public ObserverCollision
{
public:
    Pastille();
};

#endif // PASTILLE_H

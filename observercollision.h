
#include "notifiercollision.h"
#include "personnage.h"

class ObserverCollision:public Personnage
{
private:


public:
    ObserverCollision();
    virtual void collision(NotifierCollision notifieur)=0;
    bool test_collision(int x, int y);

};



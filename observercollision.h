
<<<<<<< HEAD
=======
>>>>>>> 0a2dc7ce6d8d6bbdbbd9839633d1c12628f64259
=======
>>>>>>> pastille
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
<<<<<<< HEAD
<<<<<<< HEAD
=======

>>>>>>> 0a2dc7ce6d8d6bbdbbd9839633d1c12628f64259
=======
>>>>>>> pastille

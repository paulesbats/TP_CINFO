<<<<<<< HEAD

=======
>>>>>>> 7ffbc83ce96f238bf290546a318e671ac893f19f
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


=======
>>>>>>> 7ffbc83ce96f238bf290546a318e671ac893f19f

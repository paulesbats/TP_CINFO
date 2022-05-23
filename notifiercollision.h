#include <string>
#include "personnage.h"
#include "observercollision.h"

class NotifierCollision:public Personnage
{
private:

public:
    NotifierCollision();
<<<<<<< HEAD
    void notify();
=======
    void notify(int x,int y);
    void addObserver(ObserverCollision obs);
    void removeObserver(ObserverCollision obs);

>>>>>>> 1a94dd9b347360118ce0fc6b61d026d6c6dd47c5

};

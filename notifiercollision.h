#include <string>
#include "personnage.h"
#include "observercollision.h"

class NotifierCollision:public Personnage
{
private:

public:
    NotifierCollision();
    void notify(int x,int y);
    void addObserver(ObserverCollision obs);
    void removeObserver(ObserverCollision obs);


};

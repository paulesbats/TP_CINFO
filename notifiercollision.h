#include <string>
#include "personnage.h"

class NotifierCollision:public Personnage
{
private:

public:
    NotifierCollision();
    void notify();

};

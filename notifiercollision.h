#ifndef NOTIFIERCOLLISION_H
#define NOTIFIERCOLLISION_H
#include <string>
#include <observercollision.h>

class NotifierCollision:public ObserverCollision
{
private:

public:
    NotifierCollision();
    void notify();

};
#endif

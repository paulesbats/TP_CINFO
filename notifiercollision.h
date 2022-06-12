#ifndef NOTIFIERCOLLISION_H
#define NOTIFIERCOLLISION_H
#include <string>
#include <vector>

#include "observercollision.h"

class NotifierCollision
{
private:
    std::vector<ObserverCollision*> observerList;
public:
    NotifierCollision();
    void notify(int x,int y);
    void addObserver(ObserverCollision *obs);
};
#endif

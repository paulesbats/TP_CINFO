#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H



class ObserverCollision
{
private:


public:
    ObserverCollision();
    virtual void collision(NotifierCollision notifieur)=0;
    bool test_collision(int x, int y);

};

#endif // OBSERVERCOLLISION_H

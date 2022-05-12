#ifndef OBSERVERCOLLISION_H
#define OBSERVERCOLLISION_H
class NotifierCollision;


class ObserverCollision
{
private:


public:
    ObserverCollision();
    void collision(NotifierCollision notifieur);
    bool test_collision(int x, int y);

};

#endif // OBSERVERCOLLISION_H

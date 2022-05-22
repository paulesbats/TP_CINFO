#include <string>

class NotifierCollision:public Personnage
{
private:
    int pos_x;
    int pos_y;

public:
    NotifierCollision();
    std::string notify();

};

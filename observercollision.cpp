#include "observercollision.h"



ObserverCollision::ObserverCollision()
{

}

bool ObserverCollision::test_collision(int x, int y){
    if(x==getpos_x() && y==getpos_y() ){
        return true;
    }
    else{
        return false;
    }
}

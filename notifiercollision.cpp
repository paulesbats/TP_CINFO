
#include "observercollision.h"
#include <string>

NotifierCollision::NotifierCollision()
{

}
std::string NotifierCollision::notify(){
    test_collision(getpos_x(),getpos_y());
}

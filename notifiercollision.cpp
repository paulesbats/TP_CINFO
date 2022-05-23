#include "notifiercollision.h"
#include "observercollision.h"
#include <string>

NotifierCollision::NotifierCollision()
{

}
std::string NotifierCollision::notify(int x,int y){
    test_collision(int x,int y);
}

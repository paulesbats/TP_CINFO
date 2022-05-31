#include "clyde.h"
#include <random>
#include <ctime>


Clyde::Clyde()
{

}
void Clyde::new_pos(){
    srand(time(NULL));
    int val = rand() % 4; // 0 à 9
    switch(val){
    case 0 : deplacer(1,0);
        break;
    case 1 : deplacer(0,1);
        break;
    case 2 : deplacer(1,1);
        break;
    case 3 : deplacer(0,0);
        break;

    }
}

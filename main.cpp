#include <QApplication>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "personnage.h"
#include "clyde.h"

//test
using namespace std;

class ExceptionBounds{

};

class ExceptionCommand{

};


#include "exceptionsizetab.h"
using namespace std;


bool deplacer_personnage(int &x, int &y, std::string cmd);
bool detecter_collision(int ennemis_x[], int ennemis_y[],int nb_ennemis, int x, int y);


int main(int argc, char** argv)
{
    int x=5, y=4;
    Personnage personnage1;
    Clyde clyde1 ,clyde2;

    int enn_x[4] = {1,2,3,4}, enn_y[4] = {1, 2, 3, 4};
    try {
        if (detecter_collision(enn_x, enn_y, 4, x, y))
        {
            std::cout << "Collision" << std::endl;
        }
    } catch(ExceptionSizeTab&) {
        std::cout << "ExceptionSizeTab levée." << std::endl;
    }

    try {
        if (detecter_collision(enn_x, enn_y, -1, x, y))
        {
            std::cout << "Collision" << std::endl;
        }
    } catch(ExceptionSizeTab&) {
        std::cout << "ExceptionSizeTab levée." << std::endl;
    }





    std::string saisie;
    while (true){
    std::getline(std::cin,saisie);
    std::cout << "Vous avez saisi : " << saisie << std::endl;
    try {
        deplacer_personnage(x,y, saisie);
    }  catch (ExceptionBounds& e) {
          std::cout << "Vous sortez des limites" << std::endl;
          deplacer_personnage(x,y, saisie);

    }
    catch (ExceptionCommand& e){
        std::cout << "Vous n'avez pas rentré une commande valide" << std::endl;
    }

    std::cout << x << " et " << y << std::endl;
    }









    return 0;
}

bool deplacer_personnage(int &x, int &y, std::string cmd){
    const int xmin = 0;
    const int xmax = 32;
    const int ymin = 0;
    const int ymax = 15;

    if (cmd == "RIGHT"){
        if (x+1 > xmax){
            throw ExceptionBounds();
        }
        else{
            x++;
            return true;
        }
    }
    else if (cmd == "LEFT"){
        if (x-1 < xmin){
            throw ExceptionBounds();
        }
        else{
            x--;
            return true;
        }
    }
    else if (cmd == "UP"){
        if (y-1 < ymin){
            throw ExceptionBounds();
        }
        else{
            y--;
            return true;
        }
    }
    else if (cmd == "DOWN"){
        if (y+1 > ymax){
            throw ExceptionBounds();
        }
        else{
            y++;
            return true;
        }
    }
    else if (cmd == "IDLE"){
          return false;
    }
    else{
        throw ExceptionCommand();
    }


    std::cout << x << " et " << y << std::endl;
    }


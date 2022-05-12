#include <QApplication>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

class ExceptionBounds{

};

class ExceptionCommand{

};

bool deplacer_personnage(int &x, int &y, std::string cmd);


int main(int argc, char** argv)
{
    int x=5, y=4;
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

}

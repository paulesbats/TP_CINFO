//inclusions
#include <string>
#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include "exceptionsizetab.h"


//Definition des limites du labyrinthe
#define xmin 0
#define xmax 32

#define ymin 0
#define ymax 15


bool detecter_collision(int ennemis_x[], int ennemis_y[],int nb_ennemis, int x, int y);
bool deplacer_personnage(int& x,int& y, std::string cmd);

class ExceptionBounds{

}
    ;
class ExceptionCommands{

}
    ;


int main(int argc, char** argv)
{
    int x=5, y=4;
    int enn_x[4] = {1,2,3,4}, enn_y[4] = {1, 2, 3, 4};
    try {
        if (detecter_collision(enn_x, enn_y, 4, x, y))
        {
            std::cout << "Collision" << std::endl;
        }
    } catch(ExceptionSizeTab) {
        std::cout << "ExceptionSizeTab levée." << std::endl;
    }

    try {
        if (detecter_collision(enn_x, enn_y, -1, x, y))
        {
            std::cout << "Collision" << std::endl;
        }
    } catch(ExceptionSizeTab& e) {
        std::cout << "ExceptionSizeTab levée." << std::endl;
    }


    std::string saisie;

    //Demande infinie d'instruction + modification
    while (true){
    std::getline(std::cin,saisie);
    std::cout<<"Vous avez saisi"<<saisie<<std::endl;
    try{
    deplacer_personnage (x,y,saisie);
    }
    catch (ExceptionBounds& eb){ //Erreur en cas de deplacement impossible
        std::cout<<"Deplacement immposible";
        }
    catch (ExceptionCommands& ec){//Erreur de commande
        std::cout<<"Mauvaise commande de deplacement";
        }
    catch(...){//Si CPT
            std::cout<<"CPT";
        }
    }
    return 0;

}

bool detecter_collision(int ennemis_x[], int ennemis_y[],int nb_ennemis, int x, int y)
{
    if (nb_ennemis <= 0)
        throw ExceptionSizeTab() ;
    return true;

}

bool deplacer_personnage(int x, int y, std::string cmd)
{
    if (cmd == "UP"){
        if ((y - 1) >= ymin){
            y -= 1;
            return true;
        } else return false;
    }else if (cmd == "DOWN"){
        if ((y + 1)<= ymax){
            y += 1;
            return true;
        } else return false;
    }else if (cmd == "RIGHT"){
        if ((x + 1 )<= xmax){
            x += 1;
            return true;
        } else return false;
    }else if (cmd =="LEFT"){
        if ((x - 1) >= xmin){
            x -= 1;
            return true;
        } else return false;
    }
    return false;
}

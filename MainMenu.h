//
// Created by Afonso Martins on 04/12/2021.
//

#ifndef PROJETOAED_MAINMENU_H
#define PROJETOAED_MAINMENU_H

#include<iostream>
#include<ctime>
#include "list"
#include "Voo.h"

class MainMenu {
    std::list<Voo> listaVoos = {Voo(48235,),Voo(5),Voo(3241),Voo(34),Voo(547),Voo(56),Voo(765)};
public:
    void menu();
    void pagFuncionarios();
    void pagClientes();
};


#endif //PROJETOAED_MAINMENU_H


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
    std::queue<Voo> filaVoo;

public:
    void menu();
    void pagFuncionarios();
    void pagClientes();
};


#endif //PROJETOAED_MAINMENU_H


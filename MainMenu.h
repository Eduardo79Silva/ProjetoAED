//
// Created by Afonso Martins on 04/12/2021.
//

#ifndef PROJETOAED_MAINMENU_H
#define PROJETOAED_MAINMENU_H

#include<iostream>
#include<ctime>
#include "list"
#include "Voo.h"
#include "TextTable.h"

class MainMenu {
    std::list<Voo> listaVoo;

public:
    void menu();
    void pagFuncionarios();
    void pagClientes();

    void listaVoos();  //tanto para funcionário como para passageiro
    void listaServicos();  //para funcionarios

    void comprarBilhete();
};


#endif //PROJETOAED_MAINMENU_H


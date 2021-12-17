
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
    std::list<Voo> listaVoo; //Lista que contém todos os voos realizados pela companhia aérea
    std::list<Aeroporto> listaAeroporto; // Lista que contém todos os aeroportos para os quais a companhia aérea pode realizar as suas viagens

public:
    void menu();
    void pagFuncionarios();
    void pagClientes();

    void listaVoos();  //Tanto para funcionário como para passageiro
    void listaServicos();  //Para funcionarios
    void povoarVoo(std::list<Voo> &list1); //Função que lê o ficheiro com todos os dados sobre os voos existentes e os adiciona à lista de voos
    void povoarAeroporto(std::list<Aeroporto> & list);
    void comprarBilhete();
};


#endif //PROJETOAED_MAINMENU_H


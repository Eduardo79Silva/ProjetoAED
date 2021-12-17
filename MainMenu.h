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

/**
     * Classe que implementa os menus da aplicação, que são representados e conectados através de funcões-membro.
     * Implementa também algumas funções secundárias necessárias aos menus.
     */

class MainMenu {
    std::list<Voo> listaVoo; //Lista que contem todos os voos realizados pela companhia aerea

public:
    /**
     * Mostra o menu principal, a partir do qual se acedem a todas as outras opções.
     */
    void menu();
    /**
     * Mostra a página do menu para funcionários da companhia.
     */
    void pagFuncionarios();
    /**
     * Mostra a página do menu para clientes da companhia.
     */
    void pagClientes();
<<<<<<< HEAD
    /**
     * Mostra a lista de voos planeados, tanto para os clientes como para os funcionários.
     */
    void listaVoos();  //tanto para funcionário como para passageiro
    /**
     * Mostra aos funcionários a lista de serviços a realizar.
     */
    void listaServicos();  //para funcionarios
    /**
     * Mostra o menu de compra de bilhete para os clientes.
     */
=======

    void listaVoos();  //Tanto para funcionário como para passageiro
    void listaServicos();  //Para funcionarios
    void povoarVoo(std::list<Voo> &list1); //Função que lê o ficheiro com todos os dados sobre os voos existentes e os adiciona à lista de voos
>>>>>>> 2019b9ab94ade98285ba82a2d682123e08b2b87f
    void comprarBilhete();
};


#endif //PROJETOAED_MAINMENU_H


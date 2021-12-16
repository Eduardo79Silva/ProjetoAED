//
// Created by Afonso Martins on 04/12/2021.
//

#ifndef PROJETOAED_MAINMENU_H
#define PROJETOAED_MAINMENU_H

#include<iostream>
#include<ctime>
#include "TextTable.h"

/**
     * Classe que implementa os menus da aplicação, que são representados e conectados através de funcões-membro.
     * Implementa também algumas funções secundárias necessárias aos menus.
     */

class MainMenu {
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
    void comprarBilhete();
};


#endif //PROJETOAED_MAINMENU_H


//
// Created by Afonso Martins on 04/12/2021.
//

#ifndef PROJETOAED_MAINMENU_H
#define PROJETOAED_MAINMENU_H

#include<iostream>
#include<ctime>
#include "list"
#include "Voo.h"
#include "Aviao.h"
#include "TextTable.h"
#include "bst.h"
#include "Servico.h"

class MainMenu {
    std::list<Voo> listaVoo; //Lista que contém todos os voos realizados pela companhia aérea
    std::list<Aeroporto> listaAeroporto; // Lista que contém todos os aeroportos para os quais a companhia aérea pode realizar as suas viagens
    std::list<Aviao> listaAviao; //Lista que contém todos os aviões pertencentes à companhia aérea
    queue<Servico> queueServicos;
public:
    void menu();
    void pagFuncionarios();
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
    /**
     * Mostra tanto aos clientes como aos funcionários a lista de aeroportos disponíveis
     */
    void listaAeroportos();
    /**
     * Mostra tanto aos clientes como aos funcionários a lista de aviõse pertencentes à companhia aérea
     */
    void listaAvioes();
    /**
     *
     *
     */
    void listaLugares(vector<std::string> lugares);
    void povoarVoo(std::list<Voo> &list1); //Função que lê o ficheiro com todos os dados sobre os voos existentes e os adiciona à lista de voos
    void povoarAeroporto(std::list<Aeroporto> & list);
    void povoarAvioes(std::list<Aviao> &list);
    void povoarLugares(std::list<Aviao> &list);
    void povoarRedes();
    void povoarSistema(); //Função que chama todas as outras que lêem os dados dos ficheiros
    void removerDados();
    void listaTransportes();
    void povoarServicos();
};


#endif //PROJETOAED_MAINMENU_H


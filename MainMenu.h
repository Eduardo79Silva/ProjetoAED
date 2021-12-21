
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
#include <algorithm>

/**
     * Classe que representa o menu da aplicação.
     */

class MainMenu {
    std::list<Voo> listaVoo; //Lista que contém todos os voos realizados pela companhia aérea
    std::list<Aeroporto> listaAeroporto; // Lista que contém todos os aeroportos para os quais a companhia aérea pode realizar as suas viagens
    std::list<Aviao> listaAviao; //Lista que contém todos os aviões pertencentes à companhia aérea
    queue<Servico> queueServicos;
public:
    /**
     * Mostra a página principal do menu.
     */
    void menu();
    /**
     * Mostra a página do menu para funcionários.
     */
    void pagFuncionarios();
    /**
     * Mostra a página do menu para clientes.
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
    /**
     * Mostra tanto aos clientes como aos funcionários a lista de aeroportos disponíveis
     */
    void listaAeroportos();
    /**
     * Mostra tanto aos clientes como aos funcionários a lista de aviões pertencentes à companhia aérea
     */
    void listaAvioes();
    /**
     * Mostra o mapa de lugares disponíveis num voo.
     * @param lugares O vetor dos lugares de um avião.
     */
    void listaLugares(vector<std::string> lugares);
    /**
     * Lê o ficheiro com todos os dados sobre os voos existentes e os adiciona à lista de voos.
     * @param list1 A lista de voos a preencher.
     */
    void povoarVoo(std::list<Voo> &list1);
    /**
     * Lê o ficheiro com todos os dados sobre os aeroportos existentes e os adiciona à lista de aeroportos.
     * @param list A lista de aeroportos da compahia aérea.
     */
    void povoarAeroporto(std::list<Aeroporto> & list);
    /**
     * Lê o ficheiro com todos os dados sobre os aviões existentes e os adiciona à lista de aviões.
     * @param  list
     */
    void povoarAvioes(std::list<Aviao> &list);
    /**
     * Adiciona os lugares a um avião.
     * @param list A lista de aviões aos quais se vai acrescentar os lugares
     */
    void povoarLugares(std::list<Aviao> &list);
    /**
     * Lê o ficheiro com todos os dados sobre as redes de transportes nas imediações dos aeroportos e adiciona-os às respetivas redes de transportes (BSTs).
     */
    void povoarRedes();
    /**
     * Função que chama todas as outras que lêem os dados dos ficheiros
     */
    void povoarSistema();
    /**
     * Permite editar e remover dados na aplicação.
     */
    void editarDados();

    /**
     * Mostra ao utilizador a rede de transportes existente nas imediações de um aeroporto.
     */
    void listaTransportes();
    /**
     * Lê o ficheiro com todos os dados sobre os serviços a realizar e o respetivo staff.
     */
    void povoarServicos();
    /**
     * Lê os ficheiros sobre passageiros e bilhetes e adiciona-os aos respetivos voos
     */
    void povoarPassageiros();
    /**
     * Chama todas as outras funções de output
     */
    void outputDados();
    /**
     * Função que lê o ficheiro dos voos e os adiciona à lista de voos
     */
    void outputVoos();
    /**
    * Função que lê o ficheiro dos aviões e os adiciona à lista de aviões
    */
    void outputAvioes();
    /**
    * Função que lê o ficheiro dos aeroportos e os adiciona à lista de aeroportos
    */
    void outputAeroportos();
    /**
    * Função que lê o ficheiro dos serviços e os adiciona à lista de serviços
    */
    void outputServicos();
    /**
     * Função que permite realizar uma pesquisa e apresentar a lista parcial de aeroportos correspondentes
     */
    void pesquisaAeroportos();
    /**
     * Função que permite realizar uma pesquisa e apresentar a lista parcial de voos correspondentes
     */
    void pesquisaVoos();
    /**
     * Função que permite ao utilizador adicionar dados como voos, aeroportos, aviões e serviços
     */
    void adicionarDados();
};


#endif //PROJETOAED_MAINMENU_H


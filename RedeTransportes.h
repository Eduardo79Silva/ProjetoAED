//
// Created by eduar on 06/12/2021.
//

#ifndef PROJETOAED_REDETRANSPORTES_H
#define PROJETOAED_REDETRANSPORTES_H
#include "string"
#include "vector"
#include "queue"
#include "Transporte.h"
#include <fstream>
#include "bst.h"
#include <list>
#include <cstring>

/**
     * Classe que representa a rede de transportes nas imediacões de um aeroporto através de uma BST.
     */


class RedeTransportes {
    BST<Transporte> mapaTransportes;
public:
    /**
     * Função para ajudar a passar uma string de horarios para uma lista.
     */
    vector<string> splitHor(string strhor);
    RedeTransportes(): mapaTransportes(Transporte("",0)) {};
    /**
     * Lê a rede de transportes de um aeroporto através do ficheiro csv correspondente.
     * @param cidade A cidade do aeroporto para ler do ficheiro
     * @return Os transportes numa lista.
     */
    list<Transporte> lerFicheiro(string cidade);
    /**
     * Passa os transportes para o mapa (BST).
     * @param transportes A lista dos transportes
     */
    void toMap(list<Transporte> transportes);
    /**
     * @return A BST que corresponde ao mapa dos transportes.
     */
    BST<Transporte> getBST();



};

#endif //PROJETOAED_REDETRANSPORTES_H

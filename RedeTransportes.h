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
    vector<string> splitHor(string strhor);
    RedeTransportes(): mapaTransportes(Transporte("",0)) {};
    list<Transporte> lerFicheiro(string cidade);
    void toMap(list<Transporte> transportes);
    BST<Transporte> getMapa() const;

    //ler de ficheiro e passar para a bst

};

#endif //PROJETOAED_REDETRANSPORTES_H

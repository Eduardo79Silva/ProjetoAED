//
// Created by eduar on 06/12/2021.
//

#ifndef PROJETOAED_REDETRANSPORTES_H
#define PROJETOAED_REDETRANSPORTES_H
#include "string"
#include "vector"
#include "queue"
#include "bst.h"
#include "Transporte.h"

/**
     * Classe que representa a rede de transportes nas imediacões de um aeroporto através de uma BST.
     */


class RedeTransportes {
    BST<Transporte> mapaTransportes;
public:
    RedeTransportes();
    
};


#endif //PROJETOAED_REDETRANSPORTES_H

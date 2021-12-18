//
// Created by eduar on 05/12/2021.
//

#ifndef PROJETOAED_AEROPORTO_H
#define PROJETOAED_AEROPORTO_H
#include "string"
#include "RedeTransportes.h"

/**
     * Classe que representa os aeroportos entre os quais a companhia aérea faz voos.
     * Implementa getters.
     */

class Aeroporto {
    std::string cidade;
    RedeTransportes transportes;

public:
    Aeroporto();
    Aeroporto(std::string c);
    std::string getCidade() const;
};


#endif //PROJETOAED_AEROPORTO_H

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
    /**
     * Retorna a cidade que identifica o aeroporto
     * @return Cidade do aeroporto
     */
    std::string getCidade() const;
    RedeTransportes getRede();
    void setRede(RedeTransportes r);
    bool operator<(const Aeroporto &a1);
};


#endif //PROJETOAED_AEROPORTO_H

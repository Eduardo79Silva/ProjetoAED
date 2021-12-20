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
     * @return A cidade do aeroporto
     */
    std::string getCidade() const;
    /**
     * @return A rede de transportes nas imediações do aeroporto.
     */
    RedeTransportes getRede();
    /**
     * Atribui uma rede de transportes ao aeroporto.
     * @param r A rede de transportes.
     */
    void setRede(RedeTransportes r);
    /**
     * Impementação do operador menor com base na cidade do aeroporto.
     */
    bool operator<(const Aeroporto &a1);
};


#endif //PROJETOAED_AEROPORTO_H

//
// Created by eduar on 05/12/2021.
//

#ifndef PROJETOAED_AEROPORTO_H
#define PROJETOAED_AEROPORTO_H
#include "string"

/**
     * Classe que representa os aeroportos entre os quais a companhia aérea faz voos.
     * Implementa getters.
     */

class Aeroporto {
    std::string nome;
    std::string cidade;
    std::string pais;
public:
    Aeroporto();
    Aeroporto(std::string n, std::string c, std::string p);
    /**
     * @return Retorna o nome do aeroporto.
     */
    std::string getNome() const;
    /**
      * @return Retorna a cidade do aeroporto.
      */
    std::string getCidade() const;
    /**
     * @return Retorna o país do aeroporto.
     */
    std::string getPais() const;
};


#endif //PROJETOAED_AEROPORTO_H

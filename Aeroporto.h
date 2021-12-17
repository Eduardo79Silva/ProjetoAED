//
// Created by eduar on 05/12/2021.
//

#ifndef PROJETOAED_AEROPORTO_H
#define PROJETOAED_AEROPORTO_H
#include "string"
<<<<<<< HEAD

/**
     * Classe que representa os aeroportos entre os quais a companhia aérea faz voos.
     * Implementa getters.
     */
=======
#include "RedeTransportes.h"
>>>>>>> 2019b9ab94ade98285ba82a2d682123e08b2b87f

class Aeroporto {
    std::string nome;
    std::string cidade;
    std::string pais;
    RedeTransportes transportes;

public:
    Aeroporto();
    Aeroporto(std::string c);
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

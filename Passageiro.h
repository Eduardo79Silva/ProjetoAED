//
// Created by InesGarcia on 04/12/2021.
//

#ifndef PROJETOAED_PASSAGEIRO_H
#define PROJETOAED_PASSAGEIRO_H

#include <string>
#include "Bilhete.h"

using namespace std;

/**
     * Classe que representa um passageiro.
     */

class Passageiro {
    string nome;
    int idade;
    int id;
    Bilhete bilhete;
public:
    Passageiro(string nome, int idade, int id);
    void adquirirBilhete(int numVoo, bool bagagem, string lugar);
    /**
     * Atribui o nome ao passageiro.
     * @param nome nome a atribuir.
     */
    void setNome(string nome);
    /**
     * @return O nome do passageiro.
     */
    string getNome();
    /**
     * Atribui a idade ao passageiro.
     * @param idade idade a atribuir.
     */
    void setIdade(int idade);
    /**
     * @return A idade do passageiro.
     */
    int getIdade();
    /**
     * Atribui o ID ao passageiro.
     * @param id ID a atribuir.
     */
    void setId(int id);
    /**
     * @return O ID do passageiro.
     */
    int getId();
    /**
     * Atribui um bilhete passageiro.
     * @param bilhete bilhete a atribuir.
     */
    void setBilhete(Bilhete bilhete);
    /**
     * @return O bilhete do passageiro.
     */
    Bilhete getBilhete();


};

#endif //PROJETOAED_PASSAGEIRO_H

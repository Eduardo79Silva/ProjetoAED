//
// Created by InesGarcia on 04/12/2021.
//

#ifndef PROJETOAED_PASSAGEIRO_H
#define PROJETOAED_PASSAGEIRO_H

#include <string>
#include "Bilhete.h"

/**
     * Classe que representa um passageiro, identificando-o inequivocamente através dos seus atributos.
     */

using namespace std;

class Passageiro {
    string nome;
    int idade;
    int id;
    Bilhete bilhete;
public:
    Passageiro(string nome, int idade, char sexo, int id);
    void adquirirBilhete(int numVoo, bool bagagem, string lugar);
    /**
     * Atribui o nome ao passageiro.
     */
    void setNome(string nome);
    /**
     * @return Retorna o nome do passageiro.
     */
    string getNome();
    /**
     * Atribui a idade ao passageiro.
     */
    void setIdade(int idade);
    /**
     * @return Retorna a idade do passageiro.
     */
    int getIdade();
    /**
     * Atribui o ID ao passageiro.
     */
    void setId(int id);
    /**
     * @return Retorna o ID do passageiro.
     */
    int getId();
    /**
     * Atribui um bilhete ao passageiro.
     */
    void setBilhete(Bilhete bilhete);
    Bilhete getBilhete();
};

#endif //PROJETOAED_PASSAGEIRO_H

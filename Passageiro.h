//
// Created by InesGarcia on 04/12/2021.
//

#ifndef PROJETOAED_PASSAGEIRO_H
#define PROJETOAED_PASSAGEIRO_H

#include <string>
#include "Bilhete.h"

using namespace std;

class Passageiro {
    string nome;
    int idade;
    int id;
    Bilhete bilhete;
public:
    Passageiro(string nome, int idade, int id);
    void adquirirBilhete(int numVoo, bool bagagem, string lugar);
    void setNome(string nome);
    string getNome();
    void setIdade(int idade);
    int getIdade();
    /**
     * Atribui o ID ao passageiro.
     */
    void setId(int id);
    int getId();
    void setBilhete(Bilhete bilhete);
    Bilhete getBilhete();
};

#endif //PROJETOAED_PASSAGEIRO_H

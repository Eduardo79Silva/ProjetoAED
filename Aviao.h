// Created by eduar on 01/12/2021.

#ifndef PROJETOAED_AVIAO_H
#define PROJETOAED_AVIAO_H


#include "Voo.h"
#include <string>
#include "iostream"
#include "list"

class Aviao{
    Voo voo;
    std::string matricula;
    std::string tipo;
    int capacidade;
    std::list<Voo> listaVoos;
public:
    Aviao(std::string m, std::string t);
    /**
     * @return Matrícula que identifica o avião
     */
    std::string getMatricula() const;
    /**
     * @return Tipo do avião
     */
    std::string getTipo() const;
    /**
     * @return Capacidade do avião
     */
    int getCapacidade() const;
    /**
     * @return Lista de voos que o avião faz
     */
    std::list<Voo> getVoos() const;

};

#endif //PROJETOAED_AVIAO_H

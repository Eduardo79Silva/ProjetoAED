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
    std::vector<std::string> lugares;
    std::list<Voo> planoVoo;
public:
    Aviao(std::string m, std::string t);
    std::string getMatricula() const;
    std::string getTipo() const;
    int getCapacidade() const;
    void setCapacidade(int c);
    std::vector<std::string> getLugares() const;
    void setLugares(std::string l);
    std::list<Voo> getVoos() const;

};

#endif //PROJETOAED_AVIAO_H

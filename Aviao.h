// Created by eduar on 01/12/2021.

#ifndef PROJETOAED_AVIAO_H
#define PROJETOAED_AVIAO_H


#include "Voo.h"
#include <string>
#include "iostream"
#include "list"

<<<<<<< HEAD

=======
>>>>>>> 2019b9ab94ade98285ba82a2d682123e08b2b87f
class Aviao{
    Voo voo();
    std::string matricula;
    std::string tipo;
    int capacidade;
    std::list<Voo> listaVoos;
public:
    Aviao(std::string m, std::string t);
    std::string getMatricula() const;
    std::string getTipo() const;
    int getCapacidade() const;
    std::list<Voo> getVoos() const;

};

#endif //PROJETOAED_AVIAO_H

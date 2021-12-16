//
// Created by eduar on 03/12/2021.
//

#include "Aviao.h"

std::string Aviao::getMatricula() const {
    return nullptr;
}

Aviao::Aviao(std::string m, std::string t) {

}

std::string Aviao::getTipo() const {
    return this->tipo;
}

int Aviao::getCapacidade() const {
    return this->capacidade;
}

std::list<Voo> Aviao::getVoos() const {
    return this->listaVoos;
}


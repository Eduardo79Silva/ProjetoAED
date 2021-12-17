//
// Created by eduar on 03/12/2021.
//

#include "Aviao.h"

std::string Aviao::getMatricula() const {
    return matricula;
}

Aviao::Aviao(std::string m, std::string t) {
    this->matricula=m;
    this->tipo = t;

}

std::string Aviao::getTipo() const {
    return this->tipo;
}

int Aviao::getCapacidade() const {
    return this->capacidade;
}

std::list<Voo> Aviao::getVoos() const {
    return this->planoVoo;
}

void Aviao::setCapacidade(int c) {
    this->capacidade = c;
}

std::vector<std::string> Aviao::getLugares() const {
    return this->lugares;
}

void Aviao::setLugares(std::string l) {
    this->lugares.push_back(l);

}


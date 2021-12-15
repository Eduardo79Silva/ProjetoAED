//
// Created by eduar on 05/12/2021.
//

#include "Aeroporto.h"

Aeroporto::Aeroporto(): nome(""),  cidade(""), pais("") {}

Aeroporto::Aeroporto(std::string n, std::string c, std::string p) {
    this->nome = n;
    this->cidade = c;
    this->pais = p;
}

std::string Aeroporto::getNome() const {
    return this->nome;
}

std::string Aeroporto::getCidade() const {
    return this->cidade;
}

std::string Aeroporto::getPais() const {
    return this->pais;
}

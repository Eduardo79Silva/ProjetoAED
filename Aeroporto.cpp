//
// Created by eduar on 05/12/2021.
//

#include "Aeroporto.h"

Aeroporto::Aeroporto(): cidade("") {}

std::string Aeroporto::getCidade() const {
    return this->cidade;
}

Aeroporto::Aeroporto(std::string c) {
    this->cidade = c;
}

RedeTransportes Aeroporto::getRede() {
    return this->transportes;
}

void Aeroporto::setRede(RedeTransportes r) {
    transportes = r;
}

bool Aeroporto::operator<(const Aeroporto &a1) {
    return this->getCidade() < a1.getCidade();
}

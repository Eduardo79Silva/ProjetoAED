//
// Created by eduar on 06/12/2021.
//

#include "RedeTransportes.h"

RedeTransportes::RedeTransportes() {
    this->tipoTransporte = {};
    this->distancia = 0;
    this->horarios = {};
}

std::vector<std::string> RedeTransportes::getTransporte() const {
    return this->tipoTransporte;
}

float RedeTransportes::getDistancia() const {
    return this->distancia;
}

std::queue<std::string> RedeTransportes::getHorarios() const {
    return this->horarios;
}

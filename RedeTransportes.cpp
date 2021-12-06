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

void RedeTransportes::setTransporte(std::vector<std::string> tipoTransporte) {
    this->tipoTransporte = tipoTransporte;

}

void RedeTransportes::setDistancia(float distancia) {
    this->distancia = distancia;

}

void RedeTransportes::setHorarios(std::queue<std::string> horarios) {
    this->horarios = horarios;
}

void RedeTransportes::addTransporte(std::string transporte) {
    this->tipoTransporte.push_back(transporte);
}

void RedeTransportes::addhorario(std::string horario) {
    this->horarios.push(horario);
}

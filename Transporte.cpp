//
// Created by Afonso Martins on 16/12/2021.
//

#include "Transporte.h"

Transporte::Transporte(std::string tipo, float dist, std::queue<std::string> h) {
    this->tipoTransporte = tipo;
    this->distancia = dist;
    this->horarios = h;
}

std::string Transporte::getTransporte() const {
    return this->tipoTransporte;
}

float Transporte::getDistancia() const {
    return this->distancia;
}

std::queue<std::string> Transporte::getHorarios() const {
    return this->horarios;
}

void Transporte::setTransporte(std::string tipo) {
    this->tipoTransporte = tipo;

}

void Transporte::setDistancia(float dist) {
    this->distancia = dist;

}

void Transporte::setHorarios(std::queue<std::string> h) {
    this->horarios = h;
}

void Transporte::addhorario(std::string h) {
    this->horarios.push(h);
}

bool Transporte::operator<(const Transporte &t) const {
    return this->distancia<t.getDistancia();
}
bool Transporte::operator==(const Transporte &t) const{
    return this->distancia==t.getDistancia();
}
bool Transporte::operator>(const Transporte &t) const {
    return this->distancia>t.getDistancia();
}

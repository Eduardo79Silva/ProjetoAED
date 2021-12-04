//
// Created by Afonso Martins on 04/12/2021.
//

#include "CarrinhoTransporte.h"

CarrinhoTransporte::CarrinhoTransporte(int c, int p, int m) {

    this->carruagens = c;
    this->pilhas = p;
    this->malas = m;
}

int CarrinhoTransporte::getCarruagens() {
    return this->carruagens;
}

int CarrinhoTransporte::getPilhas() {
    return this->pilhas;
}

int CarrinhoTransporte::getMalas() {
    return this->malas;
}

void CarrinhoTransporte::setCarruagens(int c) {
    this->carruagens = c;
}

void CarrinhoTransporte::setPilhas(int p) {
    this->pilhas = p;
}

void CarrinhoTransporte::setMalas(int m) {
    this->malas = m;
}


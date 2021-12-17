//
// Created by eduar on 03/12/2021.
//

#include "Voo.h"
#include "Aeroporto.h"

Voo::Voo():nrVoo(0), dataPartida(""), duracao(""), aeroportoOrigem(Aeroporto()), aeroportoDestino(Aeroporto()) {}


Voo::Voo(int nrVoo) {
    this->nrVoo = nrVoo;
}

int Voo::getNrVoo() const {
    return this->nrVoo;
}

std::string Voo::getDuracao() const {
    return this->duracao;
}

std::string Voo::getData() const {
    return this->dataPartida;
}

Aeroporto Voo::getOrigem() const {
    return this->aeroportoOrigem;
}

Aeroporto Voo::getDestino() const {
    return this->aeroportoDestino;
}

void Voo::setData(std::string data) {
    this->dataPartida = data;
}

void Voo::setDuracao(std::string duracao) {
    this->duracao = duracao;
}

void Voo::setOrigem(Aeroporto &origem) {
    this->aeroportoOrigem = origem;
}

void Voo::setDestino(Aeroporto &destino) {
    this->aeroportoDestino = destino;
}

<<<<<<< HEAD

=======
>>>>>>> master

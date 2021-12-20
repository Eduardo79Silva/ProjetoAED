//
// Created by InesGarcia on 04/12/2021.
//

#include "Passageiro.h"

Passageiro::Passageiro(string nome, int idade, int id) {
    this->nome = nome;
    this->idade = idade;
    this->id = id;
    this->bilhetes = {};
}

void Passageiro::setNome(string nome) {
    this->nome = nome;
}

string Passageiro::getNome() {
    return nome;
}

void Passageiro::setIdade(int idade) {
    this->idade = idade;
}

int Passageiro::getIdade() {
    return idade;
}

void Passageiro::setId(int id) {
    this->id = id;
}

int Passageiro::getId() {
    return id;
}

void Passageiro::setBilhete(Bilhete bilhete) {
    this->bilhetes.push_back(bilhete);
}

list<Bilhete> Passageiro::getBilhete() {
    return this->bilhetes;
}
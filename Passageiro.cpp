//
// Created by InesGarcia on 04/12/2021.
//

#include "Passageiro.h"

Passageiro::Passageiro(string nome, int idade, char sexo, int id) {
    this->nome = nome;
    this->idade = idade;
    this->id = id;
    Bilhete b1;
    this->bilhete = b1;
}

void Passageiro::adquirirBilhete(int numVoo, bool bagagem, string lugar) {
    bilhete.setNumVoo(numVoo);
    bilhete.setbagagem(bagagem);
    bilhete.setLugar(lugar);
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
    this->bilhete = bilhete;
}

Bilhete Passageiro::getBilhete() {
    return bilhete;
}
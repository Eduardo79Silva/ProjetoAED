//
// Created by Afonso Martins on 18/12/2021.
//

#include "Servico.h"

Staff::Staff() {;}

Staff::Staff(std::string n) {
    nome = n;
}
std::string Staff::getNome() {
    return this->nome;
}

void Staff::setNome(std::string n) {
    this->nome = n;
}

Servico::Servico() {;}
Servico::Servico(std::string t, std::string d, Staff r) {
    tipo = t;
    data = d;
    responsavel = r;
}

std::string Servico::getTipo() {
    return this->tipo;
}

std::string Servico::getData() {
    return this->data;
}

Staff Servico::getStaff() {
    return this->responsavel;
}
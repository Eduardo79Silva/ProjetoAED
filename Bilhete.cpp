//
// Created by InesGarcia on 04/12/2021.
//

#include "Bilhete.h"

Bilhete::Bilhete(){
    numVoo = 0;
    lugar = "";
    bagagem = false;
}
Bilhete::Bilhete(int numVoo, string lugar, bool bagagem) {
    this->numVoo = numVoo;
    this->lugar = lugar;
    this->bagagem = bagagem;
}

int Bilhete::getNumVoo() {
    return numVoo;
}

void Bilhete::setNumVoo(int numVoo) {
    this->numVoo = numVoo;
}

string Bilhete::getLugar() {
    return lugar;
}

void Bilhete::setLugar(string lugar) {
    this->lugar = lugar;
}

bool Bilhete::getBagagem() {
    return bagagem;
}

void Bilhete::setbagagem(bool bagagem) {
    this->bagagem = bagagem;
}
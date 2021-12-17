//
// Created by Afonso Martins on 04/12/2021.
//

#include "CarrinhoTransporte.h"

CarrinhoTransporte::CarrinhoTransporte(int c, int p, int m) {
    this->carruagens = c;
    this->pilhas = p;
    this->malas = m;

    vector<vector<stack<Bagagem>>>bagagens;
    for (int i = 0; i < c; i++){
        vector<stack<Bagagem>> pilha;
        for (int j = 0; j < p; j++){
            stack<Bagagem>pi;
            pilha.push_back(pi);
        }
        bagagens.push_back(pilha);
    }
    this->bagagens = bagagens;
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

vector<vector<stack<Bagagem>>> CarrinhoTransporte::getBagagens() {
    return bagagens;
}

void CarrinhoTransporte::addBagagem(Bagagem bagagem){
    if (bagagem.getMalas() == 1){
        for (int i = 0; i < bagagens.size(); i++){
            for (int j = 0; j < bagagens[i].size(); j++){
                if (bagagens[i][j].size() < malas){
                    bagagens[i][j].push(bagagem);
                    return;
                }
                continue;
            }
        }
    }
    if (bagagem.getMalas() > 1){
        for (int k = 0; k < bagagem.getMalas(); k++){
            Bagagem b;
            b.setMalas(1);
            addBagagem(b);
        }
    }
}

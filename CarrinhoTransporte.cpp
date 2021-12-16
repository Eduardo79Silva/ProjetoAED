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

void CarrinhoTransporte::addBagagem(Bagagem bagagem){
    for (int i = 0; i < bagagens.size(); i++){
        for (stack<Bagagem> bag : bagagens[i]){
            int numMala = bagagem.getMalas();
            if (bag.size() == malas){
                continue;
            }
            if (numMala + bag.size() <= malas){
                bag.push(bagagem);
                return;
            }
            else {
                while (bag.size() != malas){
                    Bagagem b;
                    b.setMalas(1);
                    bag.push(b);
                    bagagem.setMalas(numMala - 1);
                }
                continue;
            }
        }
    }
}

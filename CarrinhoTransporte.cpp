//
// Created by Afonso Martins on 04/12/2021.
//

#include "CarrinhoTransporte.h"
#include <iostream>

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
    if (bagagens[carruagens - 1][pilhas - 1].size() == malas){
        cout << "Carrinho de transporte cheio." << endl;
        return;
    }
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

void CarrinhoTransporte::showCarrinho() {
    vector<vector<stack<Bagagem>>> bag = bagagens;

    for(int i = 0; i < bag.size(); i++){
        while (bag[i][0].size() != 0){
            int s = bag[i][0].size();
            int count = 0;
            for (int j = 0; j < carruagens; j++){
                for (int l = 0; l < pilhas; l++){
                    if (s == bag[j][l].size()){
                        count ++;
                        bag[j][l].pop();
                    }
                }
            }
            for (int m = 0; m < count; m++){
                cout << "__\t";
            }
            cout << "\n";
        }
    }

    int n = 1;
    for (int i = 0; i < carruagens; i++){
        for (int j = 0; j < pilhas; j++){
            cout << "P" << n << "\t";
            n++;
        }
    }

    cout << "\n"
         << "\n";

    if (bagagens[carruagens - 1][pilhas - 1].size() == malas){
        cout << "Vagas = 0\n";
    }
    else {
        int lot = 0;
        for (int i = 0; i < carruagens; i++){
            for (int j = 0; j < pilhas; j++){
                lot += bagagens[i][j].size();
            }
        }
        int vagas = (carruagens * pilhas * malas) - lot;
        cout << "Vagas = " << vagas << "\n";
    }

}

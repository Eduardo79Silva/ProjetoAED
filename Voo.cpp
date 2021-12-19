//
// Created by eduar on 03/12/2021.
//

#include "Voo.h"
#include "Aeroporto.h"
#include "algorithm"

Voo::Voo():nrVoo(0), dataPartida(""), duracao(""), aeroportoOrigem(Aeroporto()), aeroportoDestino(Aeroporto()), carrinho(CarrinhoTransporte()) {}


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

CarrinhoTransporte Voo::getCarrinho() const {
    return this->carrinho;
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

vector<string> Voo::getLugaresVoo() const {
    return this->lugaresVoo;
}

void Voo::setLugaresVoo(vector<string> l) {
    this->lugaresVoo = l;
}

void Voo::setCarrinho(CarrinhoTransporte carrinho) {
    this->carrinho = carrinho;
}
void Voo::editLugar(string l, bool o) {
    if(o){
        std::vector<string>::iterator it;
        it = std::find(lugaresVoo.begin(), lugaresVoo.end(), l);
        *it = "X";
    }
    else{
        int pos = 0;
        int a =stoi(l.substr(1,1));
        int row = (a-1) *6;
        switch(l[0]){
            case('A'):
                pos = row;

                break;
            case('B'):
                pos = row+1;
                break;
            case('C'):
                pos = row+2;
                break;
            case('D'):
                pos = row+3;
                break;
            case('E'):
                pos = row+4;
                break;
            case('F'):
                pos = row+5;
                break;

        }
        if(lugaresVoo[pos] == "X")
            this->lugaresVoo[pos] = l;
    }
}

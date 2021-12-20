// Created by eduar on 01/12/2021.

#ifndef PROJETOAED_VOO_H
#define PROJETOAED_VOO_H

#include "string"
#include "Aeroporto.h"
#include "CarrinhoTransporte.h"
#include <vector>
#include "Bilhete.h"
#include "Passageiro.h"

class Voo{
    int nrVoo;
    int lotacao;
    std::string dataPartida; //Restingir ao tipo: DD/MM/YYYY (ou outros)
    std::string duracao; //restringir: hh:mm
    Aeroporto aeroportoOrigem;
    Aeroporto aeroportoDestino;
    vector<std::string> lugaresVoo;
    CarrinhoTransporte carrinho;
    vector<Passageiro> passageiroVoo;

public:
    Voo();
    Voo(int nrVoo);
    int getNrVoo() const;
    std::string getData() const;
    std::string getDuracao() const;
    Aeroporto getOrigem() const;
    Aeroporto getDestino() const;
    vector<string> getLugaresVoo() const;
    vector<Passageiro> getPassageiro() const;
    int getLotacao() const;
    CarrinhoTransporte getCarrinho() const;
    void setData(std::string data);
    void setDuracao(std::string duracao);
    void setOrigem(Aeroporto &origem);
    void setDestino(Aeroporto &destino);
    void setLugaresVoo(vector<string> l);
    void setCarrinho(CarrinhoTransporte carrinho);
    void setBilhetes (vector<Passageiro> p);
    void setLotacao(int l);
    void editLugar(string l, bool o);
   void outputDados();
    bool sortData(Voo &v1, Voo&v2);
    bool sortOrigem(Voo &v1, Voo &v2);
    bool sortDestino(Voo &v1, Voo &v2);
    bool sortNumero(Voo &v1, Voo &v2);
  

};

#endif //PROJETOAED_VOO_H

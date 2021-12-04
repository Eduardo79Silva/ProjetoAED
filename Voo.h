// Created by eduar on 01/12/2021.

#ifndef PROJETOAED_VOO_H
#define PROJETOAED_VOO_H

#include "string"
#include "Aviao.h"

class Voo{
    int nrVoo{};
    string dataPartida; //Restingir ao tipo: DD/MM/YYYY (ou outros)
    string duracao; //restringir: hh:mm
    Aeroporto aeroportoOrigem{};
    Aeroporto aeroportoDestino{};
public:
    Voo();
    Voo(int nrVoo);
    int getNrVoo() const;
    string getData() const;
    string getDuracao() const;
    Aeroporto getOrigem() const;
    Aeroporto getDestino() const;
    void setData(string data);
    void setDuracao(string duracao);
    void setOrigem(Aeroporto origem);
    void setDestino(Aeroporto destino);


};


#endif //PROJETOAED_VOO_H

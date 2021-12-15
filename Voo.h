// Created by eduar on 01/12/2021.

#ifndef PROJETOAED_VOO_H
#define PROJETOAED_VOO_H

#include "string"
#include "Aeroporto.h"

class Voo{
    int nrVoo;
    std::string dataPartida; //Restingir ao tipo: DD/MM/YYYY (ou outros)
    std::string duracao; //restringir: hh:mm
    Aeroporto aeroportoOrigem;
    Aeroporto aeroportoDestino;
public:
    Voo();
    Voo(int nrVoo);
    //Voo(int nrVoo, std::string dataPartida, std::string duracao,Aeroporto aeroportoOrigem,Aeroporto aeroportoDestino);
    int getNrVoo() const;
    std::string getData() const;
    std::string getDuracao() const;
    Aeroporto getOrigem() const;
    Aeroporto getDestino() const;
    void setData(std::string data);
    void setDuracao(std::string duracao);
    void setOrigem(Aeroporto &origem);
    void setDestino(Aeroporto &destino);


};


#endif //PROJETOAED_VOO_H

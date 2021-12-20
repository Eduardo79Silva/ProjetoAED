// Created by eduar on 01/12/2021.

#ifndef PROJETOAED_VOO_H
#define PROJETOAED_VOO_H

#include "string"
#include "Aeroporto.h"
#include "CarrinhoTransporte.h"
#include <vector>
#include "Bilhete.h"

/**
     * Classe que representa um voo da companhia aérea.
     */

class Voo{
    int nrVoo;
    std::string dataPartida; //Restingir ao tipo: DD/MM/YYYY (ou outros)
    std::string duracao; //restringir: hh:mm
    Aeroporto aeroportoOrigem;
    Aeroporto aeroportoDestino;
    vector<std::string> lugaresVoo;
    CarrinhoTransporte carrinho;
    vector<Bilhete> bilhetesVoo;

public:
    Voo();
    Voo(int nrVoo);
    /**
     * @return O número do voo.
     */
    int getNrVoo() const;
    /**
     * @return A data do voo.
     */
    std::string getData() const;
    /**
     * @return A duração do voo.
     */
    std::string getDuracao() const;
    /**
     * @return O aeroporto de origem do voo.
     */
    Aeroporto getOrigem() const;
    /**
     * @return O aeroporto de destino do voo.
     */
    Aeroporto getDestino() const;
    /**
     * @return O vetor com os lugares do voo.
     */
    vector<string> getLugaresVoo() const;
    /**
     * @return O vetor com os bilhetes do voo.
     */
    vector<Bilhete> getBilhetes() const;
    /**
     * @return O carrinho que transporta as bagagens para o avião correspondente ao voo.
     */
    CarrinhoTransporte getCarrinho() const;
    /**
     * Atribui uma data ao voo.
     * @param data A data do voo.
     */
    void setData(std::string data);
    /**
     * Atribui uma duração ao voo.
     * @param duracao A duração do voo.
     */
    void setDuracao(std::string duracao);
    /**
     * Atribui um aeroporto de origem ao voo.
     * @param origem O aeroporto de origem.
     */
    void setOrigem(Aeroporto &origem);
    /**
     * Atribui um aeroporto de destino ao voo.
     * @param destino O aeroporto de destino.
     */
    void setDestino(Aeroporto &destino);
    /**
     * Atribui um vetor de lugares ao voo.
     * @param l O vetor de lugares.
     */
    void setLugaresVoo(vector<string> l);
    /**
     * Atribui um carrinho de transportes de bagagem ao voo.
     * @param carrinho O carrinho de transporte.
     */
    void setCarrinho(CarrinhoTransporte carrinho);
    /**
     * Atribui um vetor de bilhetes adquiridos para o voo.
     * @param b O vetor de bilhetes adquiridos.
     */
    void setBilhetes (vector<Bilhete> b);
    /**
     * Permite editar a informação relativa a um lugar do voo.
     */
    void editLugar(string l, bool o);
    /**
     * Comparador de datas.
     */
    bool sortData(Voo &v1, Voo&v2);
    /**
     * Comparador de aeroportos de origem (ordem alfabética).
     */
    bool sortOrigem(Voo &v1, Voo &v2);
    /**
     * Comparador de aeroportos de destino (ordem alfabética).
     */
    bool sortDestino(Voo &v1, Voo &v2);
    /**
     * Comparador de números de voo.
     */
    bool sortNumero(Voo &v1, Voo &v2);

};

#endif //PROJETOAED_VOO_H

//
// Created by Afonso Martins on 04/12/2021.
//

#ifndef PROJETOAED_CARRINHOTRANSPORTE_H
#define PROJETOAED_CARRINHOTRANSPORTE_H

#include <stack>
#include <queue>
#include "Bagagem.h"

using namespace std;

/**
     * Classe que representa o carrinho que transporta as malas até ao avião.
     * Implementa getters e setters.
     */

class CarrinhoTransporte {
    int carruagens;
    int pilhas;
    int malas;
    int capacidade;
    vector<vector<stack<Bagagem>>> bagagens;
public:
    CarrinhoTransporte();
    CarrinhoTransporte(int c, int p, int m);
    /**
     * @return Retorna o número de carruagens num carrinho.
     */
    int getCarruagens();
    /**
     * @return Retorna o número de pilhas numa carruagem.
     */
    int getPilhas();
    /**
     * @return Retorna o número de malas numa  pilha.
     */
    int getMalas();
    /**
     *
     * @return Retorna a capacidade do carrinho.
     */
    int getCapacidade();
    /**
     * Atribui ao número de carruagens o valor c.
     */
    void setCarruagens(int c);
    /**
     * Atribui ao número de pilhas o valor p.
     */
    void setPilhas(int p);
    /**
     * Atribui ao número de malas o valor m.
     */
    void setMalas(int m);
    /**
     *
     * @return Retorna todas as bagagens no carinho
     */
    vector<vector<stack<Bagagem>>> getBagagens();
    /**
     *
     * @param bagagem
     * Adiciona ao carrinho uma bagagem.
     */
     void addBagagem(Bagagem bagagem);
     /**
      * Mostra a disposição das malas no carrinho e o número de vagas
      */
     void showCarrinho();

};


#endif //PROJETOAED_CARRINHOTRANSPORTE_H

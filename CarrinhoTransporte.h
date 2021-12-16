//
// Created by Afonso Martins on 04/12/2021.
//

#ifndef PROJETOAED_CARRINHOTRANSPORTE_H
#define PROJETOAED_CARRINHOTRANSPORTE_H

/**
     * Classe que representa o carrinho que transporta as malas até ao avião.
     * Implementa getters e setters.
     */

class CarrinhoTransporte {
    int carruagens;
    int pilhas;
    int malas;
public:
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
};


#endif //PROJETOAED_CARRINHOTRANSPORTE_H

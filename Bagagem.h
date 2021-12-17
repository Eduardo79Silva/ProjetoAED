//
// Created by Afonso Martins on 04/12/2021.
//

#ifndef PROJETOAED_BAGAGEM_H
#define PROJETOAED_BAGAGEM_H

/**
     * Classe que representa a bagagem de um passageiro (o seu número de malas).
     * Implementa getter e setter.
     */
class Bagagem {
    int malas;
public:
    Bagagem(){
        this->malas = 0;
    }
    /**
     * @return Retorna o número de malas na bagagem do passageiro.
     */
    int getMalas(){
        return malas;
    }
    /**
     * Atribui o número de malas à bagagem do passageiro.
     */
    void setMalas(int m){
        this->malas = m;
    }

};


#endif //PROJETOAED_BAGAGEM_H

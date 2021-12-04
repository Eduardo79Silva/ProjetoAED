//
// Created by Afonso Martins on 04/12/2021.
//

#ifndef PROJETOAED_CARRINHOTRANSPORTE_H
#define PROJETOAED_CARRINHOTRANSPORTE_H


class CarrinhoTransporte {
    int carruagens;
    int pilhas;
    int malas;
public:
    CarrinhoTransporte(int c, int p, int m);
    int getCarruagens();
    int getPilhas();
    int getMalas();
    void setCarruagens();
    void setPilhas();
    void setMalas();
};


#endif //PROJETOAED_CARRINHOTRANSPORTE_H

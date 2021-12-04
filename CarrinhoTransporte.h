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
    void setCarruagens(int c);
    void setPilhas(int p);
    void setMalas(int m);
};


#endif //PROJETOAED_CARRINHOTRANSPORTE_H

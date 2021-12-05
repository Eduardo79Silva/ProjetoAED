//
// Created by eduar on 05/12/2021.
//

#ifndef PROJETOAED_AEROPORTO_H
#define PROJETOAED_AEROPORTO_H
#include "string"


class Aeroporto {
    std::string nome;
    std::string cidade;
    std::string pais;
private:
    Aeroporto();
    Aeroporto(std::string n, std::string c, std::string p);
    std::string getNome() const;
    std::string getCidade() const;
    std::string getPais() const;


};


#endif //PROJETOAED_AEROPORTO_H

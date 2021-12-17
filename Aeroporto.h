//
// Created by eduar on 05/12/2021.
//

#ifndef PROJETOAED_AEROPORTO_H
#define PROJETOAED_AEROPORTO_H
#include "string"
#include "RedeTransportes.h"

class Aeroporto {
    std::string cidade;
    RedeTransportes transportes;

public:
    Aeroporto();
    Aeroporto(std::string c);
    std::string getCidade() const;
};


#endif //PROJETOAED_AEROPORTO_H

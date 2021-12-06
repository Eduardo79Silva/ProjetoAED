//
// Created by eduar on 06/12/2021.
//

#ifndef PROJETOAED_REDETRANSPORTES_H
#define PROJETOAED_REDETRANSPORTES_H
#include "string"
#include "vector"
#include "queue"


class RedeTransportes {
    std::vector<std::string> tipoTransporte;
    float distancia;
    std::queue<std::string> horarios;
public:
    RedeTransportes();
    std::vector<std::string> getTransporte() const;
    float getDistancia() const;
    std::queue<std::string> getHorarios() const;

};


#endif //PROJETOAED_REDETRANSPORTES_H

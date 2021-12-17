//
// Created by Afonso Martins on 16/12/2021.
//

#ifndef PROJETOAED_TRANSPORTE_H
#define PROJETOAED_TRANSPORTE_H

#include <string>
#include "vector"
#include "queue"

/**
     * Classe que representa um transporte nas imediações de um aeroporto, através do tipo de transporte, da sua distância ao aeroporto e dos seus horários.
     */

class Transporte {
    std::string tipoTransporte;
    float distancia;
    std::queue<std::string> horarios;
public:
    Transporte(std::string tipo, float dist) {
        tipoTransporte = tipo;
        distancia = dist;
    };
    Transporte(std::string tipo, float dist, std::queue<std::string> h);
    /**
     * @return Retorna o tipo de transporte.
     */
    std::string getTransporte() const;
    /**
     * @return Retorna a distância do transporte ao aeroporto.
     */
    float getDistancia() const;
    /**
     * @return Retorna os horários do transporte.
     */
    std::queue<std::string> getHorarios() const;
    /**
     * Atribui o tipo de transporte.
     */
    void setTransporte(std::string tipo);
    /**
     * Atribui a distância ao aeroporto.
     */
    void setDistancia(float dist);
    /**
     * Atribui os horários do transporte.
     */
    void setHorarios(std::queue<std::string> h);
    /**
     * Adiciona um novo horário ao transporte.
     */
    void addhorario(std::string h);
    bool operator<(const Transporte &t) const;
    bool operator==(const Transporte &t) const;
    bool operator>(const Transporte &t) const;
};


#endif //PROJETOAED_TRANSPORTE_H

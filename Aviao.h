// Created by eduar on 01/12/2021.

#ifndef PROJETOAED_AVIAO_H
#define PROJETOAED_AVIAO_H


#include "Voo.h"
#include <string>
#include "iostream"
#include "list"
#include "Servico.h"

class Aviao{
    Voo voo;
    std::string matricula;
    std::string tipo;
    int capacidade;
    std::vector<std::string> lugares;
    std::list<Voo> planoVoo;
    std::queue<Servico> servicos;
public:
    Aviao(std::string m, std::string t);
    /**
     * @return Matrícula que identifica o avião
     */
    std::string getMatricula() const;
    /**
     * @return Tipo do avião
     */
    std::string getTipo() const;
    /**
     * @return Capacidade do avião
     */
    int getCapacidade() const;
    /**
     * @return Lista de voos que o avião faz
     */
    std::list<Voo> getVoos() const;
    /**
     * Função que remove/ocupa o lugar num avião
     * @param l: Lugar a remover do avião
     */
    void removerLugar(std::string l);
    /**
       * Atribui a capacidade a um avião.
       * @param c Capacidade do avião
       */
    void setCapacidade(int c);
    /**
       * @return Um vetor de lugares do avião.
       */
    std::vector<std::string> getLugares() const;
    /**
       * Atribui um lugar ao avião.
       * @param l Lugar a adicionar
       */
    void setLugares(std::string l);
    void setTipo(std::string t);
    void addServico(Servico s);

};

#endif //PROJETOAED_AVIAO_H


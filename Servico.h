//
// Created by Afonso Martins on 18/12/2021.
//

#ifndef PROJETOAED_SERVICO_H
#define PROJETOAED_SERVICO_H

#include <string>

class Staff {
    std::string nome;
public:
    Staff();
    Staff(std::string n);
    std::string getNome();
    void setNome(std::string n);
};

class Servico {
    std::string tipo;
    std::string data;
    Staff responsavel;
public:
    Servico();
    Servico(std::string t, std::string d, Staff r);
    std::string getTipo();
    std::string getData();
    Staff getStaff();
    void setTipo(std::string t);
    void setData(std::string d);
    void setStaff(Staff s);
};


#endif //PROJETOAED_SERVICO_H

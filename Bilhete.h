//
// Created by InesGarcia on 04/12/2021.
//

#ifndef PROJETOAED_BILHETE_H
#define PROJETOAED_BILHETE_H

#include <string>

/**
     * Classe que representa a informação de um bilhete para um determinado voo.
     * Implementa getter e setter.
     */

using namespace std;

class Bilhete {
    int numVoo;
    std::string lugar;
    bool bagagem;
public:
    Bilhete();
    Bilhete(int numVoo, string lugar, bool bagagem);
    /**
     * Atribui o número de voo ao bilhete.
     * @param nVoo Número do voo
     */
    void setNumVoo(int numVoo);
    /**
     * Atribui um lugar ao bilhete.
     * @param lugar Número do lugar atribuído.
     */
    void setLugar(string lugar);
    /**
     * Atribui ao booleano bagagem o valor true/false, conforme o passageiro queira incluir a bagagem no bilhete ou não.
     * @param bagagem Identifica se a bagagem está incluída ou não.
     */
    void setbagagem(bool bagagem);
    int getNumVoo();
    /**
     * @return O número de lugar do bilhete.
     */
    string getLugar();
    /**
     * @return Retorna true se a bagagem estiver incluída no bilhete e falso se não estiver.
     */
    bool getBagagem();
};



#endif //PROJETOAED_BILHETE_H

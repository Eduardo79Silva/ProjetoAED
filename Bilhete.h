//
// Created by InesGarcia on 04/12/2021.
//

#ifndef PROJETOAED_BILHETE_H
#define PROJETOAED_BILHETE_H

#include <string>

using namespace std;

class Bilhete {
    int numVoo;
    std::string lugar;
    bool bagagem;
public:
    Bilhete();
    Bilhete(int numVoo, string lugar, bool bagagem);
    /**
     * Atribui o número de voo nVoo ao bilhete.
     */
    void setNumVoo(int numVoo);
    /**
     * Atribui o número de lugar lugar ao bilhete..
     */
    void setLugar(string lugar);
    /**
     * Atribui ao booleano bagagem o valor de bagagem (true/false), conforme o passageiro queira incluir a bagagem no bilhete ou não.
     */
    void setbagagem(bool bagagem);
    int getNumVoo();
    /**
     * @return Retorna o número de lugar do bilhete.
     */
    string getLugar();
    /**
     * @return Retorna true se a bagagem estiver incluída no bilhete e falso se não estiver..
     */
    bool getBagagem();
};



#endif //PROJETOAED_BILHETE_H

//
// Created by InesGarcia on 04/12/2021.
//

#ifndef PROJETOAED_BILHETE_H
#define PROJETOAED_BILHETE_H

#include <string>

using namespace std;

/**
     * Classe que representa o bilhete de um passageiro.
     * Implementa getters e setters.
     */

class Bilhete {
    int numVoo;
    std::string lugar;
    bool bagagem;
public:
    Bilhete();
<<<<<<< HEAD
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
=======
    Bilhete(int numVoo, std::string lugar, bool bagagem);
    void setNumVoo(int numVoo);
    void setLugar(std::string lugar);
>>>>>>> 2019b9ab94ade98285ba82a2d682123e08b2b87f
    void setbagagem(bool bagagem);
    /**
     * @return Retorna o número de voo do bilhete.
     */
    int getNumVoo();
<<<<<<< HEAD
    /**
     * @return Retorna o número de lugar do bilhete.
     */
    string getLugar();
    /**
     * @return Retorna true se a bagagem estiver incluída no bilhete e falso se não estiver..
     */
=======
    std::string getLugar();
>>>>>>> 2019b9ab94ade98285ba82a2d682123e08b2b87f
    bool getBagagem();
};



#endif //PROJETOAED_BILHETE_H

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
    Bilhete(int numVoo, std::string lugar, bool bagagem);
    void setNumVoo(int numVoo);
    void setLugar(std::string lugar);
    void setbagagem(bool bagagem);
    int getNumVoo();
    std::string getLugar();
    bool getBagagem();
};



#endif //PROJETOAED_BILHETE_H

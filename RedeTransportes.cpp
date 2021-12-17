//
// Created by eduar on 06/12/2021.
//

#include "RedeTransportes.h"
#include "MACROS.h"
#include "Transporte.h"


vector<string> RedeTransportes::splitHor(string strhor) {
    vector <string> horarios;
    int n = strhor.length();
    char str[n+1];
    strcpy(str, strhor.c_str());

    // Returns first token
    char *token = strtok(str, ",");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        horarios.push_back(token);
        token = strtok(NULL, ",");
    }

    return horarios;
}

list<Transporte> RedeTransportes::lerFicheiro() {

    string tipo, dists, hor;
    float dist;
    queue<string> horarios;
    ifstream transportes;
    transportes.open(TRANSPORTES);
    transportes.ignore(1000, '\n');
    list<Transporte> listTransportes;
    while (getline(transportes, tipo, ';')) {

        getline(transportes, dists, ';');
        dist = stof(dists);
        getline(transportes, hor);

        vector<string>horariosv = splitHor(hor);


        for (auto it = horariosv.begin(); it != horariosv.end(); it++) {
            horarios.push(*it);
        }

        Transporte t(tipo, dist, horarios);
        listTransportes.push_back(t);
        queue<string> empty;
        swap( horarios, empty );
    }

    return listTransportes;
}

void RedeTransportes::toMap(list<Transporte> transportes) {
    for (auto it = transportes.begin(); it != transportes.end(); it++) {
        mapaTransportes.insert(*it);
    }
}







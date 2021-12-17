#include <iostream>
#include "MainMenu.h"
#include "Transporte.h"
#include "RedeTransportes.h"
#include <fstream>
#include "MACROS.h"
#include <cstring>


vector<string> splitHor(string strhor) {
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

list<Transporte> lfT() {
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

int main() {
    //MainMenu menu;
    //menu.menu();

    list<Transporte> transportes = lfT();
    for (auto et = transportes.begin(); et != transportes.end(); et++) {
        Transporte t = (*et);
        cout << t.getTransporte() << " " << t.getDistancia() << " ";
        queue<string> h = t.getHorarios();
        int n = h.size();
        for (int i = 0; i < n; i++) {
            string hor = h.front();
            cout << hor << " ";

            h.pop();
        }
        cout << endl;
    }






    return 0;
}

//
// Created by Afonso Martins on 04/12/2021.
//

#include "MainMenu.h"

void MainMenu::menu() {
    char c;
    while (true) {
        std::cout << "[FEUP AIRLINES]\n";
        std::cout << "\n[1] Funcionario"
                  << "\n[2] Cliente"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        switch (c) {
            case '1':
                pagFuncionarios();
                break;
            case '2':
                pagClientes();
                break;
            case '0':
                return;
            default:
                std::cout << "Opção inválida\n";
        }
    }
}

void MainMenu::pagFuncionarios() {
    char c, type;
    while (true) {
        system("CLS");
        std::cout << "[Menu funcionarios]\n"
                  << "\n[1] Ver lista de voos"  //ler de ficheiros?
                  << "\n[2] Ver servicos"  //ler de ficheiros?
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        switch (c) {
            case '1':
                //do things
                break;
            case '2':
                //do things
                break;
            case '0':
                return;
            default:
                std::cout << "Invalid Option\n";
        }
    }
}

void MainMenu::pagClientes() {
    char c, type;
    while (true) {
        system("CLS");
        std::cout << "[Menu clientes]\n"
                  << "\n[1] Ver lista de voos"  //ler de ficheiros?
                  << "\n[2] Adquirir bilhete"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        switch (c) {
            case '1':
                //do things
                break;
            case '2':
                //do things
                break;
            case '0':
                return;
            default:
                std::cout << "Invalid Option\n";
        }
    }
}

//
// Created by Afonso Martins on 04/12/2021.
//

#include "MainMenu.h"
#include <string>
#include "TextTable.h"


void MainMenu::listaVoos() {

    TextTable t( '-', '|', '+' );
    int c;

    t.add( "NumeroVoo" );
    t.add( "Partida" );
    t.add( "Duracao" );
    t.add( "Origem" );
    t.add( "Destino" );
    t.endOfRow();
    t.add("");
    t.add("");
    t.add( "" );
    t.add( "" );
    t.add( "" );
    t.endOfRow();

    t.add("FA1111");
    t.add("14/12/2021, 17:15");
    t.add( "1:00" );
    t.add( "Porto (LPPR)" );
    t.add( "Lisboa (LPPT)" );
    t.endOfRow();
    t.add("FA1112");
    t.add("14/12/2021, 19:15");
    t.add( "1:00" );
    t.add( "Lisboa (LPPT)" );
    t.add( "Porto (LPPR)" );
    t.endOfRow();
    t.setAlignment( 2, TextTable::Alignment::RIGHT );

    while (true) {
        system("CLS");
        std::cout << "[Lista de voos]\n" << "\n";
        std::cout << t;
        std::cout << "\nDigite 0 para sair.\n"
                  << "\n>";
        std::cin >> c;
        if (c==0) {
            break;
        }
    }

    return;

}





void MainMenu::menu() {
    char c;
    while (true) {
        system("CLS");
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
    char c;
    while (true) {
        system("CLS");
        std::cout << "[Menu funcionarios]\n"
                  << "\n[1] Ver lista de voos"
                  << "\n[2] Ver servicos"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        switch (c) {
            case '1':
                listaVoos();
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
    char c;
    while (true) {
        system("CLS");
        std::cout << "[Menu clientes]\n"
                  << "\n[1] Ver lista de voos"
                  << "\n[2] Adquirir bilhete"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        switch (c) {
            case '1':
                listaVoos();
                break;
            case '2':
                comprarBilhete();
                break;
            case '0':
                return;
            default:
                std::cout << "Invalid Option\n";
        }
    }
}









void MainMenu::listaServicos() {

}


void MainMenu::comprarBilhete() {

    int nv;
    std::string nome;
    char b;
    bool bagagem = false;
    int idade;
    char sexo;
    int id;

    while (true) {
        system("CLS");
        std::cout << "[Compra de bilhete]\n";

        std::cout << "\nIntroduza o numero do voo (consultar lista de voos):";
        std::cout << "\nDigite 0 para voltar ao menu\n"
                  << "\n>";
        std::cin >> nv;
        if (nv == 0) {
            return;
        }

        std::cout << "\nDeseja incluir bagagem? (S/N)";
        std::cin >> b;
        if (b = 'S') {
            bagagem = true;
        }

        std::cout << "\nIntroduza o seu nome:";
        std::cin >> nome;

        std::cout << "\nIntroduza a sua idade:";
        std::cin >> idade;

        std::cout << "\nIntroduza o seu sexo (M/F):";
        std::cin >> nome;

        //criar passageiro, bilhete e atribuir bilhete

    }
}
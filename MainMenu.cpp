//
// Created by Afonso Martins on 04/12/2021.
//
using namespace std;
#include "fstream"
#include "sstream"
#include "MainMenu.h"
#include "Voo.h"
#include "Aeroporto.h"
#include "Aviao.h"
#include "string"
#include "TextTable.h"
//#include "MACROS.h"
#include "iostream"
#include "MACROS.h"
#include <cstdio>


void MainMenu::listaVoos() {



    TextTable t( '-', '|', '+' );
    int c;

    t.add( "NumeroVoo" );
    t.add( "Origem" );
    t.add( "Destino" );
    t.add( "Duracao" );
    t.add( "Data" );
    t.endOfRow();
    t.add("");
    t.add("");
    t.add( "" );
    t.add( "" );
    t.add( "" );
    t.endOfRow();
    for(Voo voo : listaVoo){
        t.add(to_string(voo.getNrVoo()));
        t.add(voo.getOrigem().getCidade());
        t.add( voo.getDestino().getCidade());
        t.add( voo.getDuracao());
        t.add( voo.getData());
        t.endOfRow();
        t.setAlignment( 2, TextTable::Alignment::RIGHT );
    }



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

void MainMenu::listaAeroportos() {

    TextTable t( '-', '|', '+' );
    int c;

    t.add( "Cidade/Nome do Aeroporto" );
    t.endOfRow();
    t.add("");
    t.endOfRow();
    for(Aeroporto aeroporto : listaAeroporto){
        t.add(aeroporto.getCidade());
        t.endOfRow();
        t.setAlignment( 2, TextTable::Alignment::RIGHT );
    }



    while (true) {
        system("CLS");
        std::cout << "[Lista de Aeroportos]\n" << "\n";
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

void MainMenu::listaAvioes() {

    TextTable t( '-', '|', '+' );

    int c;

    t.add( "Matrícula" );
    t.add( "Tipo" );
    t.add( "Capacidade" );
    t.endOfRow();
    t.add("");
    t.add("");
    t.add( "" );
    t.endOfRow();
    for(Aviao aviao : listaAviao){
        t.add(aviao.getMatricula());
        t.add(aviao.getTipo());
        t.add(to_string(aviao.getCapacidade()));
        t.endOfRow();
        t.setAlignment( 2, TextTable::Alignment::RIGHT );
    }



    while (true) {
        system("CLS");
        std::cout << "[Lista de avioes]\n" << "\n";
        std::cout << t;
        std::cout << "\nDigite 0 para sair.\n";
        std::cout << "\nDigite 1 para ver a lista de voos.\n";
        std::cout << "\nDigite 2 para ver os lugares dos aviao.\n";
        std::cin >> c;
        if (c==0) {
            break;
        }
        else if(c==1){
            listaVoos();
        }else if(c==2){
            
        }
    }

    return;


}


void MainMenu::menu() {
    povoarSistema();
    char c;
    while (true) {
        system("CLS");
        std::cout << "[FEUP AIRLINES]\n";
        std::cout << "\n[1] Funcionario"
                  << "\n[2] Cliente"
                  << "\n[0] Sair\n"
                  << "\n>";

        cin.clear();
        //cin.ignore(INT_MAX, '\n');
        std::cin >> c;
        cin.clear();
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
                std::cout << "Opcao invalida\n";
        }
    }
}

void MainMenu::pagFuncionarios() {
    char c;
    while (true) {
        system("CLS");
        std::cout << "[Menu funcionarios]\n"
                  << "\n[1] Ver lista de voos"
                  << "\n[2] Ver lista de aeroportos"
                  << "\n[3] Ver lista de avioes"
                  << "\n[4] Ver servicos"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        cin.clear();
        switch (c) {
            case '1':
                listaVoos();

                //do things
                break;
            case '2':
                listaAeroportos();
                //do things
                break;
            case '0':
                return;
            default:
                std::cout << "Opção inválida\n";
        }
    }
}

void MainMenu::pagClientes() {
    char c;
    while (true) {
        system("CLS");
        std::cout << "[Menu clientes]\n"
                  << "\n[1] Ver lista de voos"
                  << "\n[2] Ver lista de aeroportos"
                  << "\n[3] Ver lista de aviões"
                  << "\n[4] Adquirir bilhete"
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
            case '3':
                comprarBilhete();
                break;
            case '4':
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

    std::string nv;
    std::string nome;
    char b;
    bool bagagem = false;
    int idade;
    int id;

    while (true) {
        system("CLS");
        std::cout << "[Compra de bilhete]\n";

        std::cout << "\nIntroduza o numero do voo (consultar lista de voos):";
        std::cout << "\nDigite 0 para voltar ao menu\n"
                  << "\n>";
        std::cin >> nv;
        if (nv == "0") {
            return;
        }

        std::cout << "\nDeseja incluir bagagem? (S/N)";
        std::cin >> b;
        if (b = 'S') {
            bagagem = true;
        }

        std::cout << "\nIntroduza o seu nome:";
        cin.sync();
        getline(cin, nome);

        std::cout << "\nIntroduza a sua idade:";
        std::cin >> idade;

        //criar passageiro, bilhete e atribuir bilhete

        return;
    }
}

void MainMenu::povoarSistema() {
    povoarVoo(listaVoo);
    povoarAeroporto(listaAeroporto);
    povoarAvioes(listaAviao);
    povoarLugares(listaAviao);
}

void MainMenu::povoarVoo(list<Voo> &list1) {
    string number;
    string origem;
    string destino;
    string duracao;
    string data;
    ifstream voos;
    voos.open(VOO);
    voos.ignore(1000, '\n');
    while (getline(voos, number, ';')) {
        Voo voo = Voo(stoi(number));

        getline(voos, origem, ';');
        getline(voos, destino, ';');
        getline(voos, duracao, ';');
        getline(voos, data);

        Aeroporto aeroportoOrigem = Aeroporto(origem);
        Aeroporto aeroportoDestino = Aeroporto(destino);

        voo.setData(data);
        voo.setDuracao(duracao);
        voo.setOrigem(aeroportoOrigem);
        voo.setDestino(aeroportoDestino);
        list1.push_back(voo);

    }
    voos.close();
}

void MainMenu::povoarAeroporto(list<Aeroporto> &list) {
    string cidade;
    ifstream aeroportos;
    aeroportos.open(AEROPORTO);
    aeroportos.ignore(1000, '\n');
    while (getline(aeroportos, cidade)) {
        Aeroporto aeroporto = Aeroporto(cidade);

        list.push_back(aeroporto);

    }
    aeroportos.close();

}


void MainMenu::povoarAvioes(list<Aviao> &list) {
    string matricula;
    string tipo;
    string capacidade;
    ifstream avioes;
    avioes.open(AVIOES);
    avioes.ignore(1000, '\n');
    while (getline(avioes, matricula, ';')) {
        getline(avioes, tipo, ';');
        getline(avioes, capacidade);
        Aviao aviao = Aviao(matricula, tipo);
        aviao.setCapacidade(stoi(capacidade));

        list.push_back(aviao);

    }
    avioes.close();

}

void MainMenu::povoarLugares(list<Aviao> &list) {
    for(Aviao &aviao : list){
        string lugar, linha;
        ifstream lugares;
        lugares.open(LUGARES);
        lugares.ignore(INT_MAX, '\n');
        while (getline(lugares, linha)) {
            stringstream s(linha);
            while(getline(s, lugar, ';')){
                aviao.setLugares(lugar);
            }
        }
        aviao.removerLugar("A32");
        lugares.close();
    }



}

void MainMenu::removerDados() {
    char c;
    while (true) {
        system("CLS");
        std::cout << "[Remoção de Dados]\n"
                  << "\n[1] Voos"
                  << "\n[2] Aeroportos"
                  << "\n[3] Avioes"
                  << "\n[4] Servicos"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        cin.clear();
        switch (c) {
            case '1':
                listaVoos();

                //do things
                break;
            case '2':
                //do things
                break;
            case '0':
                return;
            default:
                std::cout << "Opção inválida\n";
        }
    }


}



//
// Created by Afonso Martins on 04/12/2021.
//
using namespace std;
#include "fstream"
#include "algorithm"
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
#include "Bilhete.h"
#include "Passageiro.h"


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
        std::cout << "\n[1] Lugares no voo"
                  << "\n[2] Ordenar por data"
                  << "\n[3] Ordenar por duracao"
                  << "\n[4] Ordenar por numero de voo"
                  << "\n[5] Pesquisar voo\n"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        if (c==0) {
            break;
        }
        else if(c==1){
            system("CLS");
            std::cout << "[Lugares no voo]\n" << "\n";
            std::cout << "Digite a numero do voo que pretende visualizar:\n";
            cin.sync();
            string a;
            getline(cin, a);
            for (Voo voo :listaVoo){
                if (voo.getNrVoo() == stoi(a)){
                    listaLugares(voo.getLugaresVoo());
                    return;
                }
            }
            system("CLS");
            cout<<"\nVoo nao encontrado.";
            cout << "\n[0] Sair\n"
                 << "\n>";
            std::cin >> c;
            if (c==0) {
                break;
            }
        }
        else if(c==2){
            listaVoo.sort([](const Voo & v1, const Voo & v2)
                          {
                              return v1.getData() < v2.getData();
                          });
            listaVoos();
            break;
        }
        else if(c==3){
            listaVoo.sort([](const Voo & v1, const Voo & v2)
                          {
                              return v1.getDuracao() < v2.getDuracao();
                          });
            listaVoos();
            break;
        }
        else if(c==4){
            listaVoo.sort([](const Voo & v1, const Voo & v2)
                          {
                              return v1.getNrVoo() < v2.getNrVoo();
                          });
            listaVoos();
            break;
        }
        else if(c==5){
            pesquisaVoos();
        }
    }

    return;

}

void MainMenu::listaAeroportos()
{

    listaAeroporto.sort();

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
        std::cout << "\n[1] Lista de Voos"
                  << "\n[2] Rede de Transportes perto do Aeroporto"
                  << "\n[3] Pesquisa de Aeroporto"
                  << "\n[0] Sair\n";
        std::cin >> c;
        if (c==0) {
            break;
        }
        else if(c==1){
            listaVoos();
        }else if(c==2){
            listaTransportes();
        }
        else if(c==3){
            pesquisaAeroportos();
        }

    }

    return;

}

void MainMenu::listaAvioes() {

    TextTable t( '-', '|', '+' );

    int c;

    t.add( "Matricula" );
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
        std::cout << "\n[1] Lista de Voos"
                  << "\n[2] Lugares do Aviao"
                  << "\n[3] Ordenar por capacidade"
                  << "\n[4] Ordenar por tipo"
                  << "\n[0] Sair\n";
        std::cin >> c;
        if (c==0) {
            break;
        }
        else if(c==1){
            listaVoos();
        }else if(c==2){
            system("CLS");
            std::cout << "[Aviao]\n" << "\n";
            std::cout << "Digite a matricula do aviao que pretende visualizar\n";
            cin.sync();
            string a;
            getline(cin, a);
            for (Aviao aviao :listaAviao){
                if (aviao.getMatricula() == a){
                    listaLugares(aviao.getLugares());
                    return;
                }
            }
            system("CLS");
            cout<<"\nAviao nao encontrado.";
            cout << "\n[0] Sair\n"
                 << "\n>";
            std::cin >> c;
            if (c==0) {
                break;
            }
        }
        else if(c==3){
            listaAviao.sort([](const Aviao & a1, const Aviao & a2)
                          {
                              return a1.getCapacidade() < a2.getCapacidade();
                          });
            listaAvioes();
            break;
        }
        else if(c==4){
            listaAviao.sort([](const Aviao & a1, const Aviao & a2)
                            {
                                return a1.getTipo() < a2.getTipo();
                            });
            listaAvioes();
            break;
        }
    }

    return;


}

void MainMenu::listaLugares(vector<std::string> lugares) {
    TextTable t( '-', '|', '+' );
    int c;
    int counter =0;

    t.add( " A " );
    t.add( " B " );
    t.add( " C " );
    t.add( "    " );
    t.add( " D " );
    t.add( " E " );
    t.add( " F " );
    t.endOfRow();
    t.add( "" );
    t.add( "" );
    t.add( "" );
    t.add( "" );
    t.add( "" );
    t.add( "" );
    t.add( "" );
    t.endOfRow();
    for(string lugar : lugares){
        t.add(lugar);
        counter++;
        if(counter==3){
            t.add(" ");
        }
        if(counter ==6){
            t.endOfRow();
            counter = 0;
        }
        t.setAlignment( 2, TextTable::Alignment::RIGHT );
    }



    while (true) {
        system("CLS");
        std::cout << "[Lugares no Aviao]\n" << "\n";
        std::cout << t;
        std::cout << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        if (c==0) {
            break;
        }
    }

    return;
}

void MainMenu::listaServicos() {

    TextTable t( '-', '|', '+' );

    int c;

    t.add( "Tipo de servico" );
    t.add( "Data" );
    t.add( "Funcionario" );
    t.add("Aviao");
    t.endOfRow();
    t.add("");
    t.add("");
    t.add( "" );
    t.add( "" );
    t.endOfRow();

    int size = queueServicos.size();
    queue<Servico> auxQueue = queueServicos;

    for(int i = 0; i < size; i++ ){
        Servico s = auxQueue.front();
        auxQueue.pop();
        t.add(s.getTipo());
        t.add(s.getData());
        t.add((s.getStaff()).getNome());
        t.add(s.getAviao());
        t.endOfRow();
        t.setAlignment( 2, TextTable::Alignment::RIGHT );
    }



    while (true) {
        system("CLS");
        std::cout << "[Lista de servicos]\n" << "\n";
        std::cout << t;
        std::cout << "\n[0] Sair\n";


        std::cin >> c;
        if (c==0) {
            break;
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
                outputDados();
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
                  << "\n[5] Editar dados"
                  << "\n[6] Adicionar dados"
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
           case '3':
                listaAvioes();
                //do things
                break;
           case '4':
                listaServicos();
                //do things
                break;
            case '5':
                editarDados();
                break;
            case '6':
                adicionarDados();
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
                  << "\n[3] Ver lista de avioes"
                  << "\n[4] Adquirir bilhete"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        switch (c) {
            case '1':
                listaVoos();
                break;
            case '2':
                listaAeroportos();
                break;
            case '3':
                listaAvioes();
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

        std::cout << "\nIntroduza o numero do voo ([V] para consultar lista de voos):";
        std::cout << "\nDigite 0 para voltar ao menu\n"
                  << "\n>";
        std::cin >> nv;
        Voo vooComprar;
        if (nv == "0") {
            return;
        }
        else if(nv == "V" || nv == "v"){
            listaVoos();
            system("CLS");
            std::cout << "[Compra de bilhete]\n";

            std::cout << "\nIntroduza o numero do voo ([V] para consultar lista de voos):";
            std::cout << "\n\nDigite 0 para voltar ao menu\n"
                      << "\n>";
            std::cin >> nv;



        }
            TextTable t( '-', '|', '+' );
            int c;
            int counter =0;

            t.add( " A " );
            t.add( " B " );
            t.add( " C " );
            t.add( "    " );
            t.add( " D " );
            t.add( " E " );
            t.add( " F " );
            t.endOfRow();
            t.add( "" );
            t.add( "" );
            t.add( "" );
            t.add( "" );
            t.add( "" );
            t.add( "" );
            t.add( "" );
            t.endOfRow();
            for(Voo voo : listaVoo){
                if (voo.getNrVoo() == stoi(nv)){
                    vooComprar = voo;
                }
            }
            for(string lugares : vooComprar.getLugaresVoo()){
                t.add(lugares);
                counter++;
                if(counter==3){
                    t.add(" ");
                }
                if(counter ==6){
                    t.endOfRow();
                    counter = 0;
                }
                t.setAlignment( 2, TextTable::Alignment::RIGHT );
            }
            cout<<t;
        string lugar;
        std::cout << "\nQual o lugar que deseja? ";
        std::cin >> lugar;
        bool found = std::find(vooComprar.getLugaresVoo().begin(), vooComprar.getLugaresVoo().end(), lugar) != vooComprar.getLugaresVoo().end();
        if(found){
            for(Voo &voo : this->listaVoo){
                if (voo.getNrVoo() == stoi(nv)){
                    voo.editLugar(lugar, true);
                    voo.setLotacao(voo.getLotacao()-1);
                }
            }
        }
        std::cout << "\nDeseja incluir bagagem? (S/N)";
        std::cin >> b;
        if ((b == 'S') || (b == 's')) {
            bagagem = true;
        }

        std::cout << "\nIntroduza o seu nome:";
        cin.sync();
        getline(cin, nome);

        std::cout << "\nIntroduza a sua idade:";
        std::cin >> idade;

        std::cout << "\nIntroduza o seu numero de identificacao:";
        std::cin >> id;

        char d;
        system("CLS");
        cout<<"\n---------**Obrigado por viajar connosco**----------\n\n";
        cout << "\n[0] Sair\n"
             << "\n>";
        std::cin >> d;
        Bilhete bil;
        int nV = stoi(nv);
        bil.setNumVoo(nV);
        bil.setLugar(lugar);
        bil.setbagagem(bagagem);
        Passageiro p = Passageiro(nome, idade, id);
        p.setBilhete(bil);


        for (auto it = listaVoo.begin(); it != listaVoo.end(); it++) {
            Voo v = *it;
            if (v.getNrVoo() == nV) {
                vector<Passageiro> atual = v.getPassageiro();
                atual.push_back(p);
                (*it).setPassageiros(atual);

            }
        }

        if (d=='0') {
            return;
        }

    }
}

void MainMenu::povoarSistema() {
    povoarAvioes(listaAviao);
    povoarLugares(listaAviao);
    povoarVoo(listaVoo);
    povoarAeroporto(listaAeroporto);
    povoarRedes();
    povoarServicos();
}

void MainMenu::povoarVoo(list<Voo> &list1) {
    string number;
    string origem;
    string destino;
    string duracao;
    string data;
    string carruagens;
    string pilhas;
    string malas;
    ifstream carrinhos;
    carrinhos.open(CARRINHOS);
    carrinhos.ignore(1000, '\n');
    ifstream voos;
    voos.open(VOO);
    voos.ignore(1000, '\n');
    while (getline(voos, number, ';')) {
        Voo voo = Voo(stoi(number));

        getline(voos, origem, ';');
        getline(voos, destino, ';');
        getline(voos, duracao, ';');
        getline(voos, data);

        getline(carrinhos, carruagens, ';');
        getline(carrinhos, pilhas, ';');
        getline(carrinhos, malas, ';');

        Aeroporto aeroportoOrigem = Aeroporto(origem);
        Aeroporto aeroportoDestino = Aeroporto(destino);

        CarrinhoTransporte carrinho(stoi(carruagens), stoi(pilhas), stoi(malas));

        voo.setData(data);
        voo.setDuracao(duracao);
        voo.setOrigem(aeroportoOrigem);
        voo.setDestino(aeroportoDestino);
        voo.setCarrinho(carrinho);
        Aviao minAviao = listaAviao.front();
        for (Aviao &aviao : listaAviao) {
            if(aviao.getPlanoVoo().size() < minAviao.getPlanoVoo().size() ){
                minAviao = aviao;
            }
        }

        voo.setLugaresVoo(minAviao.getLugares());
        voo.setLotacao(minAviao.getCapacidade());
        minAviao.addVoo(voo);
        for (Aviao &aviao : listaAviao) {
            if(aviao.getMatricula() == minAviao.getMatricula() ){
                aviao = minAviao;
            }
        }
        list1.push_back(voo);

    }
    voos.close();
    carrinhos.close();
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
        while (getline(lugares, linha ) && aviao.getLugares().size()<aviao.getCapacidade()) {
            stringstream s(linha);
            while(getline(s, lugar, ';')){
                aviao.setLugares(lugar);
            }
        }
        lugares.close();
    }
}

void MainMenu::povoarRedes() {

    for (auto it = listaAeroporto.begin(); it != listaAeroporto.end(); it++) {
        Aeroporto a = *it;
        RedeTransportes t = a.getRede();
        list<Transporte> tlist = t.lerFicheiro(a.getCidade());
        t.toMap(tlist);
        (*it).setRede(t);
    }

}

void MainMenu::povoarServicos() {
    string nomefunc;
    string tipo;
    string data;
    string matricula;
    ifstream servicos;
    servicos.open(SERVICOS);
    servicos.ignore(1000, '\n');
    while (getline(servicos, nomefunc, ';')) {
        getline(servicos, tipo, ';');
        getline(servicos, data, ';');
        getline(servicos, matricula);
        Staff s = Staff(nomefunc);
        Servico servico = Servico(tipo, data, s);
        servico.setAviao(matricula);
        for (auto it = listaAviao.begin(); it != listaAviao.end(); it++) {
            if ((*it).getMatricula() == matricula) {
                (*it).addServico(servico);
            }
        }
        queueServicos.push(servico);
    }
    servicos.close();
}

void MainMenu::editarDados() {
    char c;
    while (true) {
        system("CLS");
        std::cout << "[Editar Dados]\n"
                  << "\n[1] Voos"
                  << "\n[2] Aeroportos"
                  << "\n[3] Avioes"
                  << "\n[4] Servicos"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        cin.clear();
        string a;
        string b;
        string d;
        string data;
        string nome;
        string tipo;
        queue<Servico> novoServicos;
         std::list<Aeroporto>::iterator it2;
        list<list<Voo>::iterator> elim;
         TextTable t( '-', '|', '+' );
        TextTable t1( '-', '|', '+' );

        switch (c) {
            case '1':

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
                 cout << t;

                std::cout << "\n\nPretender Editar ou Remover voos (E/R):\n";
                cin.sync();
                getline(cin, b);
                if(b == "R"){
                    cin.sync();
                    std::cout << "[Numero do voo]:\n";
                    getline(cin, a);
                    bool foundVoo = std::find_if(listaVoo.begin(), listaVoo.end(), [&a](const Voo& voo){return voo.getNrVoo() == stoi(a);}) != listaVoo.end();
                    while(foundVoo == false){
                        cout << "Voo não encontrado";
                        getline(cin, a);
                        foundVoo = std::find_if(listaVoo.begin(), listaVoo.end(), [&a](const Voo& voo){return voo.getNrVoo() == stoi(a);}) != listaVoo.end();
                    }
                    listaVoo.erase( std::find_if(listaVoo.begin(), listaVoo.end(), [&a](const Voo& voo){return voo.getNrVoo() == stoi(a);}));

                }
                else if(b == "E"){
                    cin.sync();
                    cout << "\n[Numero do voo]:\n";
                    getline(cin, a);
                    bool foundVoo = std::find_if(listaVoo.begin(), listaVoo.end(), [&a](const Voo& voo){return voo.getNrVoo() == stoi(a);}) != listaVoo.end();
                    while(foundVoo == false){
                        cout << "Voo não encontrado";
                        getline(cin, a);
                        foundVoo = std::find_if(listaVoo.begin(), listaVoo.end(), [&a](const Voo& voo){return voo.getNrVoo() == stoi(a);}) != listaVoo.end();
                    }
                    cin.sync();
                    cout << "\nQue campo pretende editar (Origem (O)/Destino (Des)/Duracao(D)/Data de partida (Data))?:\n";
                    getline(cin, b);
                    if(b == "O"){
                        cin.sync();
                        cout << "Nova origem de voo:\n";
                        getline(cin, b);
                        list<Voo>::iterator it;
                        list<Aeroporto>::iterator it2;
                        it = std::find_if(listaVoo.begin(), listaVoo.end(), [&a](const Voo& voo){return voo.getNrVoo() == stoi(a);});
                        it2 = std::find_if(listaAeroporto.begin(), listaAeroporto.end(), [&b](const Aeroporto& aeroporto){return aeroporto.getCidade() == b;});
                        bool found = std::find_if(listaAeroporto.begin(), listaAeroporto.end(), [&b](const Aeroporto& aeroporto){return aeroporto.getCidade() == b;}) != listaAeroporto.end();
                        if(found && it2->getCidade()!= it->getDestino().getCidade()){
                            it->setOrigem(*it2);
                        }
                        else{
                            cout << "\nAeroporto nao encontrado ou escolheu uma origem igual ao destino atual";
                        }

                    }
                    else if(b == "Des"){
                        cin.sync();
                        cout << "\nNovo destino de voo:\n";
                        getline(cin, b);
                        list<Voo>::iterator it;
                        list<Aeroporto>::iterator it2;
                        it = std::find_if(listaVoo.begin(), listaVoo.end(), [&a](const Voo& voo){return voo.getNrVoo() == stoi(a);});
                        it2 = std::find_if(listaAeroporto.begin(), listaAeroporto.end(), [&b](const Aeroporto& aeroporto){return aeroporto.getCidade() == b;});
                        bool found = std::find_if(listaAeroporto.begin(), listaAeroporto.end(), [&b](const Aeroporto& aeroporto){return aeroporto.getCidade() == b;}) != listaAeroporto.end();
                        if(found && it2->getCidade()!= it->getOrigem().getCidade()){
                            it->setDestino(*it2);
                        }
                        else{
                            cout << "\nAeroporto nao encontrado ou escolheu um destino igual a origem atual";
                            cout << "\n[0] Sair";
                            cin.sync();
                            getline(cin, b);
                            if(b == "0"){
                                break;
                            }

                        }

                    }
                    else if(b == "D"){
                        cin.sync();
                        cout << "\nNova duracao do voo:\n";
                        getline(cin, b);
                        list<Voo>::iterator it;
                        it = std::find_if(listaVoo.begin(), listaVoo.end(), [&a](const Voo& voo){return voo.getNrVoo() == stoi(a);});
                        it->setDuracao(b);

                    }
                    else if(b == "Data"){
                        cin.sync();
                        cout << "\nNova data de partida do voo:\n";
                        getline(cin, b);
                        list<Voo>::iterator it;
                        it = std::find_if(listaVoo.begin(), listaVoo.end(), [&a](const Voo& voo){return voo.getNrVoo() == stoi(a);});
                        it->setData(b);

                    }



                }
                break;
            case '2':
                    cin.sync();
                    std::cout << "\n[Aeroporto que pretende remover]:\n";
                    getline(cin, a);
                    for (Voo &voo : listaVoo){
                        it2 = std::find_if(listaAeroporto.begin(), listaAeroporto.end(), [&a](const Aeroporto& aeroporto){return aeroporto.getCidade() == a;});
                        bool found = std::find_if(listaAeroporto.begin(), listaAeroporto.end(), [&a](const Aeroporto& aeroporto){return aeroporto.getCidade() ==a;}) != listaAeroporto.end();
                        if(found && (it2->getCidade() == voo.getOrigem().getCidade() || it2->getCidade()== voo.getDestino().getCidade())){
                            elim.push_back(find_if(listaVoo.begin(), listaVoo.end(), [&voo](const Voo& voo1){return voo1.getNrVoo() == voo.getNrVoo();}));
                        }
                    }
                    for(auto it : elim){
                        listaVoo.erase(it);
                    }
                    listaAeroporto.erase( std::find_if(listaAeroporto.begin(), listaAeroporto.end(), [&a](const Aeroporto& aeroporto){return aeroporto.getCidade() == a;}));
                break;
            case '3':
                std::cout << "\nPretender Editar ou Remover avioes (E/R):\n";
                cin.sync();
                getline(cin, b);


                t1.add( "Matricula" );
                t1.add( "Tipo" );
                t1.add( "Capacidade" );
                t1.endOfRow();
                t1.add("");
                t1.add("");
                t1.add( "" );
                t1.endOfRow();
                for(Aviao aviao : listaAviao){
                    t1.add(aviao.getMatricula());
                    t1.add(aviao.getTipo());
                    t1.add(to_string(aviao.getCapacidade()));
                    t1.endOfRow();
                    t1.setAlignment( 2, TextTable::Alignment::RIGHT );
                }
                cout<<t1;
                if(b == "R"){
                    cin.sync();
                    std::cout << "\n[Matricula do aviao]:\n";
                    getline(cin, a);
                    listaAviao.erase( std::find_if(listaAviao.begin(), listaAviao.end(), [&a](const Aviao& aviao){return aviao.getMatricula() == a;}));

                }
                else if(b == "E"){
                    cin.sync();
                    cout << "\n[Matricula do aviao]:\n";
                    getline(cin, a);
                    cin.sync();
                    cout << "\nQue campo pretende editar (Tipo (T)/ Capacidade(C))?:\n";
                    getline(cin, b);
                    if(b == "T"){
                        cin.sync();
                        cout << "\nNovo tipo do aviao:\n";
                        getline(cin, b);
                        list<Aviao>::iterator it;
                        it = std::find_if(listaAviao.begin(), listaAviao.end(), [&a](const Aviao& aviao){return aviao.getMatricula() == a;});
                        it->setTipo(b);

                    }
                    else if(b == "C"){
                        cin.sync();
                        cout << "\nNova capaciade do aviao:\n";
                        getline(cin, b);
                        list<Aviao>::iterator it;
                        it = std::find_if(listaAviao.begin(), listaAviao.end(), [&a](const Aviao& aviao){return aviao.getMatricula() == a;});
                        it->setCapacidade(stoi(b));

                    }



                }
                break;

            case '4':
                std::cout << "\nPretender Editar ou Remover servicos (E/R):\n";
                cin.sync();
                getline(cin, b);
                std::cout << "\nTipo de servico:\n";
                cin.sync();
                getline(cin, tipo);
                std::cout << "\nNome do funcionario:\n";
                cin.sync();
                getline(cin, nome);
                std::cout << "\nData do servico:\n";
                cin.sync();
                getline(cin, data);
                while(!queueServicos.empty()){
                    if(queueServicos.front().getTipo() == tipo && queueServicos.front().getData() == data && queueServicos.front().getStaff().getNome() == nome){
                        if(b == "R"){
                            queueServicos.pop();
                        }
                        else if(b== "E"){
                            cin.sync();
                            cout << "\nQue campo pretende editar (Tipo (T)/ Data(D)/ Staff (S))?:\n";
                            getline(cin, d);
                            if(d == "T"){
                                cin.sync();
                                cout << "\nNovo tipo de servico a prestar:\n";
                                getline(cin, tipo);
                                queueServicos.front().setTipo(tipo);
                                novoServicos.push(queueServicos.front());
                                queueServicos.pop();
                            }
                            else if(d == "D"){
                                cin.sync();
                                cout << "\nNova data do servico a prestar:\n";
                                getline(cin, data);
                                queueServicos.front().setData(data);
                                novoServicos.push(queueServicos.front());
                                queueServicos.pop();
                            }
                            else if(d == "S"){
                                cin.sync();
                                cout << "\nNovo membro da staff que prestara o servico:\n";
                                getline(cin, nome);
                                Staff staff = Staff(nome);
                                queueServicos.front().setStaff(staff);
                                novoServicos.push(queueServicos.front());
                                queueServicos.pop();
                            }
                        }
                    }
                    else{
                        novoServicos.push(queueServicos.front());
                        queueServicos.pop();
                    }
                }
                queueServicos = novoServicos;


                break;

            case '0':
                return;

            default:
                std::cout << "Opção inválida\n";
        }
    }
}

void MainMenu::listaTransportes() {
    bool aeroportoEncontrado = false;
    system("CLS");
    string aeroporto;
    TextTable t( '-', '|', '+' );
    int c;
    cout << "Insira o nome do aeroporto que pretende consultar:" << endl;
    cin.sync();
    getline(cin, aeroporto);

    for (auto it = listaAeroporto.begin(); it != listaAeroporto.end(); it++) {
        Aeroporto a = *it;

        if(a.getCidade() == aeroporto) {
            aeroportoEncontrado = true;
            RedeTransportes r = a.getRede();
            BST<Transporte> tr = r.getBST();
            t.add( "Tipo" );
            t.add( "Distancia (km)" );
            t.add( "Horarios disponiveis" );
            t.endOfRow();
            t.add("");
            t.add("");
            t.add( "" );
            t.endOfRow();

            BSTItrIn<Transporte> itr(tr);

            while(!itr.isAtEnd()) {
                Transporte t1 = itr.retrieve();
                t.add(t1.getTransporte());
                t.add(to_string(t1.getDistancia()));
                string hor;
                list<string> h = t1.getHorarios();
                h.sort();

                //sort this shit

                int sizeq = h.size();
                for(auto et = h.begin(); et != h.end(); et++) {
                    hor = hor + (*et) + + ", ";
                }
                hor.pop_back();
                hor.pop_back();
                t.add(hor);
                t.endOfRow();
                t.setAlignment( 2, TextTable::Alignment::LEFT );
                itr.advance();
            }
        }

        else {
            continue;
        }

    }
    if(aeroportoEncontrado){
        while (true) {
            system("CLS");
            std::cout << "[Lista de transportes nas proximidades do aeroporto de " + aeroporto + "]\n" << "\n";
            std::cout << t;
            std::cout << "\n[0] Sair\n"
                      << "\n>";
            std::cin >> c;
            if (c==0) {
                break;
            }
        }
}
    else{
        while(true) {
            system("CLS");
            cout << "\nAeroporto nao encontrado.";
            cout << "\n\n\n[0] Sair\n"
                 << "\n>";
            std::cin >> c;
            if (c == 0) {
                break;
            }
        }
    }

    return;
}

void MainMenu::outputDados() {
    outputVoos();
    outputAeroportos();
    outputAvioes();
    outputServicos();
}

void MainMenu::outputVoos() {
    fstream fout;
    fout.open(VOO_TEMP, ios::out | ios::app);
    fout << "Number" << "; "
         << "Origem" << "; "
         << "Destino" << "; "
         << "Duracao" << "; "
         << "Data" << "\n";
    for(Voo voo :listaVoo){
        fout << voo.getNrVoo() << ";"
             << voo.getOrigem().getCidade() << ";"
             << voo.getDestino().getCidade() << ";"
             << voo.getDuracao() << ";"
             << voo.getData() << "\n";
    }
    fout.close();
    remove(VOO);
    rename(VOO_TEMP, VOO);
}

void MainMenu::outputAvioes() {
    fstream fout;
    fout.open(AVIOES_TEMP, ios::out | ios::app);
    fout << "Matricula" << "; "
         << "Modelo" << "; "
         << "Capacidade" << "\n";
    for(Aviao aviao :listaAviao){
        fout << aviao.getMatricula() << ";"
             << aviao.getTipo() << ";"
             << to_string(aviao.getCapacidade()) << "\n";
    }
    fout.close();
    remove(AVIOES);
    rename(AVIOES_TEMP, AVIOES);
}

void MainMenu::outputAeroportos() {
    fstream fout;
    fout.open(AEROPORTO_TEMP, ios::out | ios::app);
    fout << "Aeroportos" << "\n";
    for(Aeroporto aeroporto :listaAeroporto){
        fout << aeroporto.getCidade() << "\n";
    }
    fout.close();
    remove(AEROPORTO);
    rename(AEROPORTO_TEMP, AEROPORTO);
}

void MainMenu::outputServicos() {
    queue<Servico> aux = queueServicos;
    fstream fout;
    fout.open(SERVICOS_TEMP, ios::out | ios::app);
    fout << "Nome do Funcionario" << "; "
         << "Tipo de Servico" << "; "
         << "Data" << "; "
         << "Aviao" << "\n";
    while (!aux.empty()) {
        fout << aux.front().getStaff().getNome() << ";"
             << aux.front().getTipo() << ";"
             << aux.front().getData() << ";"
             << aux.front().getAviao() << "\n";
        aux.pop();
    }
    fout.close();
    remove(SERVICOS);
    rename(SERVICOS_TEMP, SERVICOS);

    }

void MainMenu::pesquisaAeroportos() {
    system("CLS");
    string pesquisa;
    cout << "\nTermo de pesquisa:" << endl;
    cin.sync();
    getline(cin, pesquisa);
    TextTable ta;
    ta.add("Cidade/Nome do Aeroporto");
    ta.endOfRow();
    ta.add("");
    ta.endOfRow();
    bool found = false;
    char c;

    system("CLS");
    for (auto it = listaAeroporto.begin(); it != listaAeroporto.end(); it++) {
        if ((*it).getCidade() == pesquisa) {
            found = true;
            ta.add((*it).getCidade());
            ta.endOfRow();
            std::cout << "[Resultados da pesquisa]\n" << "\n";
            cout << ta;
            cout << "\n[0] Sair\n";
            std::cin >> c;
            if (c == 0) {
                break;
            }
            break;
        }
    }
    if (!found) {
        cout << "Aeroporto nao encontrado" << endl;
        cout << "\n[0] Sair\n"
             << "\n>";
        std::cin >> c;
        if (c == 0) {
            return;
        }
    }

    return;
}

void MainMenu::pesquisaVoos() {
    system("CLS");
    string pesquisa;
    char c;
    cout << "\nTermo de pesquisa (numero, aeroporto de origem ou destino):" << endl;
    cin.sync();
    getline(cin, pesquisa);
    bool isnumber = false;
    std::string::const_iterator it = pesquisa.begin();
    while (it != pesquisa.end() && std::isdigit(*it)) ++it;
    if (!pesquisa.empty() && it == pesquisa.end()) {
        isnumber = true;
    };
    list<Voo> aux;
    TextTable ta;
    ta.add( "NumeroVoo" );
    ta.add( "Origem" );
    ta.add( "Destino" );
    ta.add( "Duracao" );
    ta.add( "Data" );
    ta.endOfRow();
    ta.add("");
    ta.add("");
    ta.add( "" );
    ta.add( "" );
    ta.add( "" );
    ta.endOfRow();

    for (Voo voo:listaVoo) {
        if (isnumber) {
            if (voo.getNrVoo() == stoi(pesquisa)) {
                aux.push_back((voo));
            }
        }
        if ((voo.getOrigem().getCidade() == pesquisa) || (voo.getDestino().getCidade() == pesquisa)) {
            aux.push_back((voo));
        }
    }

    if (aux.size() == 0) {
        cout << "Nao foram encontrados resultados" << endl;
        cout << "\n[0] Sair\n"
             << "\n>";
        std::cin >> c;
        if (c == 0) {
            return;
        }
    }

    else {
        for (Voo voo:aux) {
            ta.add(to_string(voo.getNrVoo()));
            ta.add(voo.getOrigem().getCidade());
            ta.add( voo.getDestino().getCidade());
            ta.add( voo.getDuracao());
            ta.add( voo.getData());
            ta.endOfRow();
            ta.setAlignment( 2, TextTable::Alignment::RIGHT );
        }
        system("CLS");
        std::cout << "[Resultados da pesquisa]\n" << "\n";
        cout << ta;
        cout << "\n[0] Sair\n";
        std::cin >> c;
        if (c == 0) {
            return;
        }
    }

}

void MainMenu::adicionarDados() {
    char c;
    while (true) {
        system("CLS");
        std::cout << "[Adicionar Dados]\n"
                  << "\n[1] Voos"
                  << "\n[2] Aeroportos"
                  << "\n[3] Avioes"
                  << "\n[4] Servicos"
                  << "\n[0] Sair\n"
                  << "\n>";
        std::cin >> c;
        cin.clear();
        string a;
        string b;
        string d;
        string e;
        string f;

        switch (c) {
            case '1': {

                cin.sync();
                std::cout << "Numero do voo:\n";
                cin.sync();
                getline(cin, a);
                std::cout << "Aeroporto de origem:\n";
                cin.sync();
                getline(cin, b);
                std::cout << "Aeroporto de destino:\n";
                cin.sync();
                getline(cin, d);
                std::cout << "Duracao(hh:mm):\n";
                cin.sync();
                getline(cin, e);
                std::cout << "Data(aaaa/mm/dd):";
                cin.sync();
                getline(cin, f);

                bool vexists = false;
                for (Voo voo: listaVoo) {
                    int nv = voo.getNrVoo();
                    if (to_string(nv) == a) {
                        vexists = true;
                    }
                }
                if (!vexists) {
                    Voo v = Voo(stoi(a));
                    Aeroporto origem = Aeroporto(b);
                    Aeroporto destino = Aeroporto(d);
                    v.setOrigem(origem);
                    v.setDestino(destino);
                    v.setDuracao(e);
                    v.setData(f);
                    listaVoo.push_back(v);
                } else {
                    cout << "Já existe um voo com o número que tentou adicionar" << endl;
                }
                break;}

                case '2': {
                cin.sync();
                std::cout << "\nCidade do aeroporto:\n";
                getline(cin, a);

                bool aexists = false;
                for (Aeroporto aeroporto: listaAeroporto) {
                    if (aeroporto.getCidade() == a) {
                        aexists = true;
                    }
                }
                if(!aexists) {
                    Aeroporto aero = Aeroporto(a);
                    listaAeroporto.push_back(aero);
                }
                else {
                    cout << "Já existe um aeroporto com o nome que tentou adicionar" << endl;
                }
                break;}

            case '3': {
                cin.sync();
                std::cout << "\nMatricula do aviao:\n";
                getline(cin, a);
                std::cout << "Tipo do aviao:\n";
                cin.sync();
                getline(cin, b);
                std::cout << "Capacidade do aviao:\n";
                cin.sync();
                getline(cin, d);

                bool pexists = false;
                for (Aviao aviao: listaAviao) {
                    if (aviao.getMatricula() == a) {
                        pexists = true;
                    }
                }
                if(!pexists) {
                    Aviao plane = Aviao(a,b);
                    plane.setCapacidade(stoi(d));
                    listaAviao.push_back(plane);
                }
                else {
                    cout << "Já existe um aviao com a matricula que tentou adicionar" << endl;
                }
                break;}

            case '4': {
                cin.sync();
                std::cout << "\nTipo de servico:\n";
                getline(cin, a);
                std::cout << "Data do servico(aaaadd/mm/aaaa):\n";
                cin.sync();
                getline(cin, b);
                std::cout << "Nome do responsavel:\n";
                cin.sync();
                getline(cin, d);
                std::cout << "Matricula do aviao:\n";
                cin.sync();
                getline(cin, e);

                Staff staff = Staff(d);
                Servico s = Servico(a,b,staff);
                s.setAviao(e);

                queueServicos.push(s);
                for (Aviao aviao:listaAviao) {
                    if (aviao.getMatricula() == e) {
                        aviao.addServico(s);
                    }
                }
                break;}

            case '0': {
                return;}

            default: {
                std::cout << "Opção inválida\n";}
        }
    }
}






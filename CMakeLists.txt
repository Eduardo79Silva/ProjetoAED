cmake_minimum_required(VERSION 3.20)
project(ProjetoAED)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProjetoAED main.cpp MainMenu.h MainMenu.cpp Voo.h Aviao.h Aviao.cpp Voo.cpp CarrinhoTransporte.h Bagagem.h CarrinhoTransporte.cpp Bilhete.h Bilhete.cpp Passageiro.cpp Passageiro.h Aeroporto.cpp Aeroporto.h RedeTransportes.cpp RedeTransportes.h TextTable.h)


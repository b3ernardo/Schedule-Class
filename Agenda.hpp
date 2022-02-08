#ifndef AGENDA_HPP
#define AGENDA_HPP

#include "Pessoa.hpp"
#include "Amigo.hpp"
#include "Conhecido.hpp"
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <ctime>

class Agenda {
  private:
    int qtdAmigos;
    int qtdConhecidos;
    vector<Pessoa*> pessoas = *new vector<Pessoa*>();
  public:
    // Construtores
    Agenda() {qtdAmigos = 0; qtdConhecidos = 0;}
    Agenda(int qtdPessoas);
    // Getters
    int getAmigos() {return qtdAmigos;}
    int getConhecidos() {return qtdConhecidos;}
    vector<Pessoa*> getPessoas() {return pessoas;}
    // Outros
    void addInformacoes();
    void imprimeAniversarios();
    void imprimeEmail();
};

#endif
#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>
#include <iostream>

using namespace std;

class Pessoa {
  private:
    string nome;
    int idade;
  public:
    // Construtores
    Pessoa(string _nome, int _idade) : nome(_nome), idade(_idade) {};
    Pessoa() {nome = "indefinido"; idade = 0;}
    // Getters
    string getNome() {return nome;}
    int getIdade() {return idade;}
    // Setters
    void setNome(string _nome) {nome = _nome;}
    void setIdade(int _idade) {idade = _idade;}
    // Outros
    virtual string aniversarioOuEmail() {return "";}
    virtual int amigoOuConhecido() {return 0;}
    virtual void imprimir();
    virtual void ler();
};

#endif
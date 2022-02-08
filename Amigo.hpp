#ifndef AMIGO_HPP
#define AMIGO_HPP

#include "Pessoa.hpp"

class Amigo : public Pessoa {
  private:
    string dataAniversario;
  public:
    // Construtor
    Amigo() : Pessoa() {dataAniversario = "indefinido";}
    // Getter
    string getDataAniversario() {return dataAniversario;}
    // Setter
    void setDataAniversario(string _dataAniversario) {dataAniversario = _dataAniversario;}
    // Outros
    string aniversarioOuEmail() {return dataAniversario;}
    int amigoOuConhecido() {return 1;}
    void imprimir();
    void ler();
};

#endif
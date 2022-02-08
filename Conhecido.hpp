#ifndef CONHECIDO_HPP
#define CONHECIDO_HPP

#include "Pessoa.hpp"

class Conhecido : public Pessoa {
  private:
    string email;
  public:
    // Construtor
    Conhecido() : Pessoa() {email = "indefinido";}
    // Getter
    string getEmail() {return email;}
    // Setter
    void setEmail(string _email) {email = _email;}
    // Outros
    string aniversarioOuEmail() {return email;}
    int amigoOuConhecido() {return 2;}
    void imprimir();
    void ler();
};

#endif
#include "Pessoa.hpp"

void Pessoa::imprimir() {
  cout << "Nome: " << this->getNome() << endl;
  cout << "Idade: " << this->getIdade() << endl;
  cout << endl;
}

void Pessoa::ler() {
  string _nome;
  int _idade;
  cout << "Nome: ";
  cin >> _nome;
  this->setNome(_nome);
  cout << "Idade: ";
  cin >> _idade;
  this->setIdade(_idade);
}

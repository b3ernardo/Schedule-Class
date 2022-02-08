#include "Conhecido.hpp"

void Conhecido::imprimir() {
  cout << this->getNome() << " " << endl;
  cout << this->getIdade() << " " << endl;
  cout << this->email << endl;
  cout << endl;
}
void Conhecido::ler() {
  Pessoa::ler();
  string _email;
  cout << "E-mail: ";
  cin >> _email;
  this->setEmail(_email);
}

#include "Amigo.hpp"

void Amigo::imprimir(){
  cout << this->getNome() << " " << endl;
  cout << this->getIdade() << " " << endl;
  cout << this->getDataAniversario() << endl;
  cout << endl;
}
void Amigo::ler(){
  Pessoa::ler();
  string _dataAniversario;
  cout << "Data de aniversario: ";
  cin >> _dataAniversario;
  this->setDataAniversario(_dataAniversario);
}
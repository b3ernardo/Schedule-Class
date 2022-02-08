#include "Agenda.hpp"

Agenda::Agenda(int qtdPessoas) {
  srand((unsigned int) time (NULL));
  this->qtdAmigos = 0;
  this->qtdConhecidos = 0;
  for (int i = 0; i < qtdPessoas; i++) {
    int _amigoOuConhecido = (rand() % 2) + 1;
    if (_amigoOuConhecido == 1) {
      this->qtdAmigos++;
      this->pessoas.push_back(new Amigo());
    } else if (_amigoOuConhecido == 2) {
        this->qtdConhecidos++;
        this->pessoas.push_back(new Conhecido());
      }
  }
}

void Agenda::addInformacoes() {
  for (int i = 0; i < pessoas.size(); i++)
    pessoas[i]->ler();
}

void Agenda::imprimeAniversarios() {
  cout << endl << "Lista de aniversarios: " << endl;
  for (int i = 0; i < pessoas.size(); i++) {
    if (pessoas[i]->amigoOuConhecido() == 1)
      cout << pessoas[i]->getNome() << " - " << pessoas[i]->aniversarioOuEmail() << endl;
  }
  cout << endl;
}

void Agenda::imprimeEmail() {
  cout << "Lista de e-mails: " << endl;
  for (int i = 0; i < pessoas.size(); i++) {
    if (pessoas[i]->amigoOuConhecido() == 2)
      cout << pessoas[i]->getNome() << " - " << pessoas[i]->aniversarioOuEmail() << endl;
  }
  cout << endl;
}

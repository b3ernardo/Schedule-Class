#include "Agenda.hpp"
#include "Amigo.hpp"
#include "Conhecido.hpp"
#include "Pessoa.hpp"

int main(void) {
  int qtdPessoas;

  cout << "Quantidade de pessoas que deseja colocar na agenda: ";
  cin >> qtdPessoas;
  
  Agenda A(qtdPessoas);

  cout << "Quantidade de amigos na agenda: " << A.getAmigos() << endl;
  cout << "Quantidade de conhecidos na agenda: " << A.getConhecidos() << endl;
  cout << endl;

  A.addInformacoes();
  A.imprimeAniversarios();
  A.imprimeEmail();

  return 0;
}
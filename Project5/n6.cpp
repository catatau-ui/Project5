/*
Catarina faria
23/12/2025
exercicio 7
*/
#include <iostream>
using namespace std;

int main()
{
	int ano_nascimento = 0;
	int ano_atual = 2025;
	int idade = 0;

	cout << "Em que ano nasceste? ";
	if (!(cin >> ano_nascimento)) {
		cout << "Entrada inválida." << endl;
		return 1;
	}
	if (ano_nascimento > ano_atual) {
		cout << "Ano de nascimento nao pode ser maior que o ano atual. " << endl;
		return 1;
	}
	idade = ano_atual - ano_nascimento;
	cout << "Tens " << idade << " anos.";

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	// Imprime cabeçalho azul usando sequência ANSI (funciona na maioria dos terminais)
	cout << "\x1b[34m" << "---------Mini_game---------" << "\x1b[0m" << endl;
	return 0;
}

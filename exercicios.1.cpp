#include <iostream>
using namespace std;

int cateto(int a, int b)
{
	return sqrt(a * a * b * b);
}

int perguntar()
{
	int a, int b;
	cout << "Digite o valor dos dois catetos menores de um triangulo: aaaaaaaaaaaaaa";
	cin >> a >> b;
	return cateto(a, b);
}
int main()
{
	int perguntar();
	int cateto();
	cout << "A resposta é: " << cateto() << endl;
	return 0;
}
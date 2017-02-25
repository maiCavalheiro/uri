#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char nome[20];
	double salario, vendas, total;

	cin >> nome;
	cin >> salario;
	cin >> vendas;

	total = salario + vendas *0.15;

	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << total<< endl;

	return 0;
}

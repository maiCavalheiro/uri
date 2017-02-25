#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int codigo1, qtd1, codigo2, qtd2;
	double valor1, valor2, pagar;

	cin >> codigo1;
	cin >> qtd1;
	cin >> valor1;

	cin >> codigo2;
	cin >> qtd2;
	cin >> valor2;

	pagar = (qtd1 * valor1) + (qtd2 * valor2);

	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << pagar << endl;

	return 0;
}

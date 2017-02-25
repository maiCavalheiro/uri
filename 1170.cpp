#include <iostream>

using namespace std;

int main()
{
	int testes, cont;
	float comida;

	cin >> testes;

	for(int i=0; i < testes;i++){
		cin >> comida;
		cont =0;
		while(comida > 1){
			comida = comida/2;
			cont++;
		}

		cout << cont <<" dias" << endl;
	}

	return 0;
}

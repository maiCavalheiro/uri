#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
	int testes;
	int produtos;
	int qtdProduto;
	int qtd;
	double preco;
	double soma;
	string produto;
	map<string,double> m;
	map<string,double>::iterator it;
	
	cin >> testes;

	for(int i=0; i < testes;i++){

		m.clear();
		cin >> produtos;

		for (int i = 0; i < produtos; ++i)
		{
			cin >> produto;
			cin >> preco;
			m.insert(pair<string,double>(produto,preco));
		}

		cin >> qtd;
		soma = 0;
		for (int i = 0; i < qtd; ++i)
		{
			cin >> produto;
			cin >> qtdProduto;

			it = m.find(produto);
			if(it != m.end())
				soma += m.find(produto)->second * qtdProduto;

		}

		cout << fixed << setprecision(2);
		cout <<"R$ "<< soma << endl;

	}
	
    
	return 0;
}
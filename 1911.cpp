#include <iostream>
#include <string.h>
#include <map>

using namespace std;

int main(){
	int matriculados;
	int emSala;
	int assFalsa = 0;
	int contador = 0;
	string nome;
	string assin;
	string compara;
	std::map<string, string>:: iterator it;
	std::map<string, string> assinaturas;

	while (cin >> matriculados){
	if(matriculados == 0) return 0;

	for (int i = 0; i < matriculados; ++i)
	{
		cin >> nome;
		cin >> assin;

		assinaturas.insert(pair<string,string>(nome,assin));
	}

	cin >> emSala;
	assFalsa = 0;

		for (int j = 0; j < emSala; ++j)
		{	
			contador = 0;
			
			cin >> nome;
			cin >> assin;
			it = assinaturas.find(nome);

				if( it != assinaturas.end())
				{
					compara = assinaturas.find(nome)->second;
				
				for (int i = 0; i < assin.length(); ++i)
				{
					if( compara[i] != assin[i]) 
				 		contador++;				
				}

				if(contador > 1){
					assFalsa++;
					contador = 0;
				}
			}	
		}
			cout << assFalsa << endl; 

}

	return 0;
}
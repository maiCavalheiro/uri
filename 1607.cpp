#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
	int testes,aux, aux2;
	string p1, p2;

	cin >> testes;

	for (int i = 0; i < testes; ++i)
	{	
		cin >> p1;
		cin >> p2;

		aux = 0;

		for (int i = 0; i < p1.size(); ++i)
		{	
			if(p2[i] > p1[i]){
				aux += p2[i] - p1[i];
			 }

			if( p2[i] < p1[i]){
				aux2 = p2[i] + 26;
				aux += aux2 - p1[i];				
			}

		}
		
		cout << aux << endl;
	}

	return 0;
}
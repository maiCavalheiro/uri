#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> par;
	vector<int> impar;
	int N;
	int valor;
	
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> valor;

		if(valor%2 == 0)
			par.push_back(valor);
		else
			impar.push_back(valor);
	}

	sort (par.begin(), par.end()); 
	for (int i = 0; i < par.size(); ++i)
	{
		cout << par[i] << endl;
	}

	sort (impar.begin(), impar.end()); 
	for (int i = 0; !impar.empty(); ++i)
	{
		cout << impar.back() << endl;
		impar.pop_back();
	}

	return 0;
}

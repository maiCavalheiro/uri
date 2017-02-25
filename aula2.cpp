#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vetor;
	int valor;	

	for(int i=0; i< 4;i++){
		cin >> valor;
		vetor.push_back(valor);

	}

	for(int i=0; i <vetor.size();i++){
		cout << vetor[i];

	}
	cout << endl;

	vetor.erase(vetor.begin()+0);

	for(int i=0; i < vetor.size();i++){
		cout << vetor[i];
	}
	cout << endl;

	vetor.insert(vetor.begin()+0,100);

	for(int i=0; i < vetor.size();i++){
		cout << vetor[i];
	}

	return 0;
}

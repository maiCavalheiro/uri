#include <iostream>
#include <vector>
#include <math.h>
#define maximo 10001

using namespace std;

vector<bool> primo(1001, 1);
vector<int> prim;

void crivo(){
	vector<bool> primo((int)(sqrt(maximo)+1),1);
	//primo[0] = primo[1] = 0;

	for (int i = 2; i < primo.size(); ++i)
	{
		if(primo[i] == 1){
			prim.push_back(i);
			for (int j = i*i; j < primo.size(); j+=i)
			{
				primo[j] = 0;
			}
		}	
	}
}

bool checar(int n){

	if(n<= 1000) return primo[n];

	for (int i = 0; i < prim.size() && prim[i]<= sqrt(n); ++i)
	{
		if(n%prim[i] == 0) return false;
	}

	return true;

}

int main()
{
	int num,testes;
	bool resp;

	cin >> testes;
	for (int i = 0; i < testes; ++i)
	{
		cin >> num;

		resp = checar(num);

		if(resp == false) 
			cout <<num<< " Not Prime" << endl;
		else
			cout <<num<< " Prime" << endl;
	}
	

	return 0;
}
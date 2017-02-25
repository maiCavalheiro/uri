#include <iostream>
#include <math.h>  

using namespace std;

bool primo(int num){
	if(num == 2) {
		return true;
	}
	if(num%2 == 0) {
		return false;
	}

	for (int i = 3; i <=sqrt(num) ; i+=2)
	{
		if(num%i==0) return false;
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

		resp = primo(num);

		if(resp == false) 
			cout <<num<< " nao eh primo" << endl;
		else
			cout <<num<< " eh primo" << endl;
	}
}

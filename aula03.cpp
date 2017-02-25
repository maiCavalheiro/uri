#include <iostream>
#include <stack>

using namespace std;

int main()
{
	
	stack <int> pilha;

	for(int i= 0; i < 5; i++){
	pilha.push(i);
	}

	for(int i= 0; i< 5; i++){
	cout << pilha.top();
	pilha.pop();
	}


	return 0;
}

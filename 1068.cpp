#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string aux;

	while (getline(cin,aux)){

	stack<char> pilha;
	
	for (int i = 0; i < aux.length(); i++)
	{		
		if(aux[i] == '(')
			pilha.push(i); 

		if(aux[i] == ')'){
			
			if(!pilha.empty()){
				pilha.pop();
			}
			else
			pilha.push(i);
		}	
	}

		if(pilha.empty()){
   			cout << "correct" << endl;
  		}else{
  			 cout << "incorrect" << endl;
  		}
  	}

  	return 0;
  }


#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	string aux;
	int count,N;

	cin >> N;
	cin.get();
 
	for(int j= 0; j<N;j++){
		stack<char> pilha;
		count = 0;
		getline(cin,aux);
	
	for (int i = 0; i < aux.size(); i++)
	{		
		if(aux[i] == '<')
			pilha.push(i); 

		if(aux[i] == '>'){
			
			if(!pilha.empty()){
				pilha.pop();
				count++;
			}
			
		}	
	}
   		cout << count << endl;

  	}
  	

  	return 0;
  }


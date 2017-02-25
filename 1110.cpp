#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int N,topo;
	queue <int> pilha;

	cin >> N;


	while(N != 0){

	if(!pilha.empty()){
		for(int i=0; i<=pilha.size(); i++){
		pilha.pop();
	}
	}

	for(int i=1; i<=N; i++){
		pilha.push(i);
	}

	cout <<"Discarded cards: 1";	
	for(int i=1; pilha.size()>1;i++){		

		pilha.pop();
		topo = pilha.front();
		pilha.push(topo);
		pilha.pop();

		if(pilha.size() > 1)
		cout <<", "<< pilha.front();
				
	}
	cout << endl;
	cout <<"Remaining card: "<< pilha.front()<<endl;
	cin >> N;
	}
    
	return 0;
}
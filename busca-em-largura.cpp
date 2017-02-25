#include <iostream>
#include <vector>
#include <list>
#include <queue>

#define INF 1000

using namespace std;


int n = 16; //numero de vertices
vector <list <int> > grafo(n);
vector<int> distancia(n, INF); //INF representa infinito.

	void dfs(vector< list<int> > & grafo, int u){

		distancia[u] = 0;

		queue<int> q;

		q.push(u);

	while(!q.empty()){

		int u = q.front();

		cout<<"vertice "<<u<<" foi visitado"<<endl;

		q.pop();

		for(list<int>::iterator it=grafo[u].begin();it!=grafo[u].end();it++){

		if(distancia[*it]==INF){

			distancia[*it] = distancia[u] + 1;

			q.push(*it);
		}
	}
}

}

int main(){
	int de, para;
	while(n--){
		grafo.insert(grafo.begin(),{1,2,3});

	}	

}

 
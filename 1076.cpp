// desenhando labirintos

#include <iostream>
#include <vector>
#include <list>

using namespace std;

#define MAX 49

int V;
vector<bool> visited(V);

void addEdge(vector< list<int> >*adj, int v, int u){
    (*adj)[v].push_back(u);
    (*adj)[u].push_back(v);
}

void printGraph(vector< list< int > >adj, int V){
  for (int v = 0; v < V; v++) {
    cout << v << ":";
    for (list<int>::iterator u = adj[ v ].begin(); u != adj[ v ].end(); u++) {
      cout << " " << *u;
    }
    cout << endl;
  }
}

int dfs(vector< list<int> >*adj, int u) {
  int cont = 0;
  //  cout << "O vertice: "<< u << " foi visitado" << endl;
    visited[u] = true;
    for(list< int >::iterator it = (*adj)[u].begin(); it != (*adj)[u].end(); it++){

       if(!visited[*it]){
         cont += dfs(adj, *it) +1 ;
         cont++;
       }
    }
    return cont;
}

int main(){

  int tests;
  int Node;
  int E;
  int v, u;

    cin >> tests;

    while(tests--){
      vector< list<int> >adj(MAX);
      cin >> Node;
      cin >> V >> E;

      for (int i = 0; i < E; i++) {
          cin >> v >> u;
          addEdge(&adj, v, u);
    }

    for(int i = 0; i < V; i++ ){
       visited[i] = false;
    }

    cout << dfs(&adj, Node) << endl;
}

  return 0;
}

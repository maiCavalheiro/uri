#include <iostream>
#include <vector>
#include <list>
using namespace std;

// definições
#define MAX 100

void addEdge(vector< list< int > > *adj, int u, int v){
  (*adj)[ u ].push_back( v );
  (*adj)[ v ].push_back( u );
}

void printGraph(vector< list< int > > adj, int V){
  // todo vértice v
  for (int v = 0; v < V; v++) {
    cout << v << ":";
    // imprime todo u que seja vizinho de v
    for (list<int>::iterator u = adj[ v ].begin(); u != adj[ v ].end(); u++) {
      cout << " " << *u;
    }
    cout << endl;
  }
}

int main(){
  // grafo
  vector< list< int > > adj(MAX);
  // número de vértices e arestas(edges)
  int V, E;
  // vértices random
  int u, v;


  cin >> V;
  cin >> E;

  for (int i = 0; i < E; i++) {
    cin >> u;
    cin >> v;
    addEdge(&adj, v, u);
  }

  printGraph(adj, V);
  return 0;
}

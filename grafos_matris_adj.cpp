#include <iostream>
#include <vector>

using namespace std;

#define MAX 100

void addEdge(vector< vector < int > > *adj,int v,int u) {
    (*adj)[u][v] = 1;
    (*adj)[v][u] = 1;
}

int main() {

// matriz adj[MAX][MAX]
    vector<vector < int > > adj(MAX, vector < int > (MAX));
    int V,E;

    cin >> V >> E;

// inicializa a matriz
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
            adj[i][j] = 0;
      }
    }

    int v,u;
    for (int i = 0; i < E; i++) {
        cin >> v >> u;
        addEdge(&adj, v, u);
    }

    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
          cout << adj[i][j] << " ";
      }
      cout << endl;
    }


  return 0;
}

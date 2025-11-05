#include "Graph.hpp"

using namespace std;

int main() {
  Graph G(10);
  G.addEdge(0,9);
  G.addEdge(4, 2);

  G.print();

  cout << "Numero total: " << G.numEdges() << endl; 

  for (int i = 0; i < 10; ++i) {
    cout << "In-degree del vertice " << i << ": " << G.inDegree(i) << endl;
  }


  for (int i = 0; i < 5; i++) {
    cout << "Vertice " << i << ": ";
    if (G.isInfluencer(i)) {
        cout << "es influencer" << endl;;
    }
    else {
      cout << "no es influencer" << endl;
    }
  }
}

//Implementation of DFS using stack in cpp

#include<bits/stdc++.h>

using namespace std;

class Graph{
  int V; //no of vertices
  list <int> *adj;
public:
  Graph(int v); //constructor
  void addEdge(int v,int w);
  void DFS(int s); //s is the source of the graph for DFS

};

Graph::Graph(int v){
  this->V = v;
  adj = new list<int>[v];
}

void Graph::addEdge(int v, int w){
  adj[v].push_back(w); //add w to v's list
}
void Graph::DFS(int s){
  vector<bool> visited (V, false);
  stack <int> stack;
  stack.push(s);

  while(!stack.empty()){
    s = stack.top();
    stack.pop();

    if(!visited[s]){
      cout<<s<<" ";
      visited[s]=true;
    }
    for(auto i = adj[s].begin();i!=adj[s].end();i++){
      if(!visited[*i])
        stack.push(*i);
    }
  }
}

int main()
{
    Graph g(5); // Total 5 vertices in graph
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 4);

    cout << "Following is Depth First Traversal\n";
    g.DFS(0);

    return 0;
}

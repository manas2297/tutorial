//This is the solution to unreachable nodes on hackerearth visited
//We are given with the graph and the head node.
//the idea is to run a dfs algo on the graph from the given head node and
//then check if the visited array contains any unvisited node.
//The number of unvisited nodes will be the Unreachable nodes from the head nodes

#include <bits/stdc++.h>

using namespace std;

class Graph{
  int v; //no of vertices
  list <int> *adj; // adjacency list
public:
  Graph(int v);
  void addEdge(int v, int w);
  int DFS(int s);

};

Graph::Graph(int V){
  v = V+1;
  adj = new list<int> [v];
}
void Graph::addEdge(int v, int w){
  adj[v].push_back(w);
  adj[w].push_back(v);
}

int Graph::DFS(int s){
  vector <bool> visited (v,false);
  stack <int> stack;
  int unreachableNode = 0;
  stack.push(s);
  while(!stack.empty()){
    s = stack.top();
    stack.pop();

    if(!visited[s]){
      visited[s]=true;
    }
    for(auto i = adj[s].begin();i!=adj[s].end();i++){
      if(!visited[*i])
        stack.push(*i);
    }
  }
  for(int i=1;i<v;i++){
    if(!visited[i])
      unreachableNode++;
  }
  return unreachableNode;
}
 int main(int argc, char const *argv[]) {
  int nodes,edges;
  int v,w;
  int headNode;
  cin>>nodes>>edges;
  Graph g(nodes);
  for(int i=0;i<edges;i++){
    cin>>v>>w;
    g.addEdge(v,w);
  }
  cin>>headNode;
  cout<<g.DFS(headNode);
  return 0;
}
// Note:: we have to consider the graph to be undirected and make the adjacency list likewise

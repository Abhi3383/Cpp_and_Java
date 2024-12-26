// using adjMatrix finding which nodes are connected with which nodes
// in directed and undirected graph

#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    // at 00:35 approx
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        // create an edge from u to v
        adjList[u].push_back(v);
        if (direction == 0)
        {
            // undirected edge
            // create an edge from v to u
            adjList[v].push_back(u);
        }
    }

    void printAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << "-> ";
            for (auto neighbour : node.second)
            {
                cout<<neighbour<<", ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph g;

    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(0,2,0);

    g.printAdjacencyList();
    return 0;
}
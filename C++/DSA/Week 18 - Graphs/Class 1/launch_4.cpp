// using adjMatrix finding which nodes are connected with which nodes
// in directed and undirected graph with weights of each edge

#include <bits/stdc++.h>
using namespace std;
template<typename T>

class Graph
{
public:
    unordered_map<T, list<pair<T, int>>> adjList;

    void addEdge(T u, T v, int weight, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        // create an edge from u to v
        adjList[u].push_back({v, weight});
        if (direction == 0)
        {
            // undirected edge
            // create an edge from v to u
            adjList[v].push_back({u, weight});
        }
    }

    void printAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << "-> ";
            for (auto neighbour : node.second)
            {
                cout << "(" << neighbour.first << ", " << neighbour.second << "), ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph<char> g;

    // directed input
    // g.addEdge(srcNode, destNode, weight, direction); 
    g.addEdge('a', 'b', 5, 0);
    g.addEdge('b','c', 8, 0);
    g.addEdge('a','c', 6, 0);

    g.printAdjacencyList();
    return 0;
}
// DFS

#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Graph
{
public:
    unordered_map<T, list<int>> adjList;

    void addEdge(T u, T v, bool direction)
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
                cout << neighbour << ", ";
            }
            cout << endl;
        }
    }

    void dfs(T src, unordered_map<int, bool> &visited)
    {
        cout << src << ", ";
        visited[src] = true;

        for (auto neighbour : adjList[src])
        {
            if (!visited[neighbour])
            {
                dfs(neighbour, visited);
            }
        }
    }
};

int main()
{
    Graph<int> g;

    // directed input
    // g.addEdge(srcNode, destNode, weight, direction);
    g.addEdge(0, 1, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(0, 2, 0);
    g.addEdge(2, 4, 0);

    g.printAdjacencyList();
    cout << endl;

    // run a loop for all nodes
    unordered_map<int, bool> visited;

    for (int i = 0; i < 4; i++)
    {
        if (!visited[i])
        {
            g.dfs(i, visited);
        }
    }
    return 0;
}
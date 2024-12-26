// BFS
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

    void bfs(T src,unordered_map<int, bool>& visited)
    {
        queue<T> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            cout << frontNode << ", ";

            // insert neighbours
            for (auto neighbour : adjList[frontNode])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
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
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(3, 5, 0);
    g.addEdge(3, 7, 0);
    g.addEdge(7, 6, 0);
    g.addEdge(7, 4, 0);

    g.printAdjacencyList();
    cout << endl;

    // run a loop for all nodes
    unordered_map<int, bool> visited;

    // why we used this loop ?
    // refer 01:27
    // short ans is to do bfs traversal in disconnected graph
    // if we have connected graph then in one go graph will be traversed
    // now if it is disconnected we are checking if there's a univisited node
    // and then we are applying bfs on that node
    for (int i = 0; i <= 7; i++)
    {
        if (!visited[i])
        {
            g.bfs(i,visited);
        }
        
    }
    return 0;
}
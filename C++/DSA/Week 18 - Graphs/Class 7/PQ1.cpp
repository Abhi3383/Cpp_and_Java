// Bellman Ford Algo

#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adjList;

    void addEdge(int u, int v, int wt, bool direction)
    {
        // direction = 1 -> undirected graph
        // direction => 0 -> directed graph;
        adjList[u].push_back({v, wt});
        if (direction == 1)
        {
            adjList[v].push_back({u, wt});
        }
    }

    void printAdjList()
    {
        for (auto t : adjList)
        {
            cout << t.first << "-> ";
            for (auto nbr : t.second)
            {
                cout << "(" << nbr.first << ", " << nbr.second << "), ";
            }
            cout << endl;
        }
    }

    void bellmanFordAlgo(int n, int src)
    {
        // assuming directed weightted graph
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        // n-1 relaxation step
        for (int i = 0; i < n - 1; i++)
        {
            // for all edges
            for (auto t : adjList)
            {
                for (auto nbr : t.second)
                {
                    int u = t.first;
                    int v = nbr.first;
                    int wt = nbr.second;
                    if (dist[u] != INT_MAX && dist[u] + wt < dist[v])
                    {
                        dist[v] = dist[u] + wt;
                    }
                }
            }
        }

        // to check for -ve cycle
        bool negativeCycle = false;
        for (auto t : adjList)
        {
            for (auto nbr : t.second)
            {
                int u = t.first;
                int v = nbr.first;
                int wt = nbr.second;
                if (dist[u] != INT_MAX && dist[u] + wt < dist[v])
                {
                    negativeCycle = true;
                    break;
                }
            }
        }

        if (negativeCycle == true)
            cout << "-ve cycle present\n";
        else
            cout << "-ve cycle absent\n";

        cout << "printing dist array: ";
        for (auto i : dist)
            cout << i << " ";
    }
};

int main()
{
    Graph g;

    g.addEdge(0, 1, -1, 0);
    g.addEdge(0, 2, 4, 0);
    g.addEdge(1, 2, 3, 0);
    g.addEdge(1, 3, 2, 0);
    g.addEdge(1, 4, 2, 0);
    g.addEdge(3, 1, 1, 0);
    g.addEdge(3, 2, 5, 0);
    g.addEdge(4, 3, -3, 0);

    g.printAdjList();
    g.bellmanFordAlgo(5,0);
}
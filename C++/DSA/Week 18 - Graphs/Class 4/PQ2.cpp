// shortest Path Bfs

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
            int src = t.first;
            cout << src << "->";
            for (auto nbr : t.second)
            {
                cout << "(" << nbr.first << "," << nbr.second << "), ";
            }
            cout << endl;
        }
    }
    void topoSortDfs(int src, unordered_map<int, bool> &visited, stack<int> &ans)
    {
        visited[src] = true;

        for (auto nbr : adjList[src])
        {
            if (!visited[nbr.first])
            {
                topoSortDfs(nbr.first, visited, ans);
            }
        }
        // while returning, store the node in stack
        cout << "Pushing " << src << endl;
        ans.push(src);
    }

    void shortestPathDfs(int dest, stack<int> topoOrder, int n)
    {
        vector<int> dist(n, INT_MAX);

        int src = topoOrder.top();
        topoOrder.pop();
        dist[src] = 0;

        for (auto nbr : adjList[0])
        {
            if (dist[0] + nbr.second < dist[nbr.first])
            {
                dist[nbr.first] = dist[0] + nbr.second;
            }
        }

        while (!topoOrder.empty())
        {
            int fNode = topoOrder.top();
            topoOrder.pop();

            if (dist[fNode] != INT_MAX)
            {
                for (auto nbr : adjList[fNode])
                {
                    if (dist[fNode] + nbr.second < dist[nbr.first])
                        dist[nbr.first] = dist[fNode] + nbr.second;
                }
            }
        }

        cout << "Printing Ans: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << i << "-> " << dist[i] << endl;
        }
        cout << endl;
    }
};

int main()
{
    Graph g;

    g.addEdge(0, 1, 5, 0);
    g.addEdge(0, 2, 3, 0);
    g.addEdge(2, 1, 2, 0);
    g.addEdge(1, 3, 3, 0);
    g.addEdge(2, 3, 5, 0);
    g.addEdge(2, 4, 6, 0);
    g.addEdge(4, 3, 1, 0);

    g.printAdjList();

    stack<int> topoOrder;
    unordered_map<int, bool> visited;
    g.topoSortDfs(0, visited, topoOrder);

    g.shortestPathDfs(3, topoOrder, 5);

    return 0;
}
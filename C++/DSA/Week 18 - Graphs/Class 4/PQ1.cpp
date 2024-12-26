// shortest Path Bfs

#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adjList;
    void addEdge(int u, int v, int wt, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction => 1 -> directed graph;
        adjList[u].push_back({v, wt});
        if (direction == 0)
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

    void shortestPathBfs(int src, int dest)
    {
        queue<int> q;
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;

        q.push(src);
        visited[src] = 1;
        parent[src] = -1;

        while (!q.empty())
        {
            int fNode = q.front();
            q.pop();

            for (auto nbr : adjList[fNode])
            {
                if (!visited[nbr.first])
                {
                    q.push(nbr.first);
                    visited[nbr.first] = 1;
                    parent[nbr.first] = fNode;
                }
            }
        }
        vector<int> ans;
        int node = dest;
        while (node != -1)
        {
            ans.push_back(node);
            node = parent[node];
        }

        reverse(ans.begin(), ans.end());

        cout << "printing ans: " << endl;
        for (auto i : ans)
        {
            cout << i << ", ";
        }
        cout << endl;
    }
};

int main()
{
    Graph g;

    g.addEdge(0, 1, 1, 1);
    g.addEdge(1, 2, 1, 1);
    g.addEdge(2, 3, 1, 1);
    g.addEdge(3, 4, 1, 1);
    g.addEdge(0, 5, 1, 1);
    g.addEdge(5, 4, 1, 1);
    g.addEdge(0, 6, 1, 1);
    g.addEdge(6, 7, 1, 1);
    g.addEdge(7, 8, 1, 1);
    g.addEdge(8, 4, 1, 1);

    g.printAdjList();

    int src = 0;
    int dest = 4;

    g.shortestPathBfs(src, dest);
}
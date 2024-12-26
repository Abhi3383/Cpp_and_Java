#include <bits/stdc++.h>
using namespace std;

class Grpah
{
public:
    unordered_map<int, list<int>> adjList;
    void addEdge(int u, int v, bool direction)
    {
        // direction = 1 -> undirected graph
        // direction => 0 -> directed graph;
        adjList[u].push_back(v);
        if (direction == 1)
        {
            adjList[v].push_back(u);
        }
    }

    void dfs1(int src, stack<int> &s, unordered_map<int, bool> &vis)
    {
        vis[src] = true;
        for (auto nbr : adjList[src])
        {
            if (!vis[nbr])
            {
                dfs1(nbr, s, vis);
            }
        }
        s.push(src);
    }
    void dfs2(int src, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adjNew)
    {
        vis[src] = true;
        cout << src << ", ";

        for (auto nbr : adjNew[src])
        {
            if (!vis[nbr])
            {
                dfs2(nbr, vis, adjNew);
            }
        }
    }

    int countSCC(int n)
    {
        stack<int> s;
        unordered_map<int, bool> visited;

        // find topo ordering
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs1(i, s, visited);
            }
        }

        // reverse all edges
        unordered_map<int, list<int>> adjNew;

        for (auto t : adjList)
        {
            for (auto nbr : t.second)
            {
                int u = t.first;
                int v = nbr;
                // v-> u insert
                adjNew[v].push_back(u);
            }
        }
        // traversse using DFS
        int count = 0;
        unordered_map<int, bool> visited2;

        while (!s.empty())
        {
            int node = s.top();
            s.pop();
            if (!visited2[node])
            {
                cout << "Printing " << count + 1 << "th SCC: ";
                dfs2(node, visited2, adjNew);
                cout << endl;
                count++;
            }
        }
    }
};
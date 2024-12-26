#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph
        // create an edge from u to v
        adjList[u].push_back(v);
        if (direction == 0)
        {
            adjList[v].push_back(u);
        }
    }

    void printAdjacencyList()
    {
        for (auto node : adjList)
        {
            cout << node.first << "->";
            for (auto nbr : node.second)
            {
                cout << nbr << ", ";
            }
            cout << endl;
        }
    }

    void topoSortBfs(int n, vector<int> &ans)
    {
        queue<int> q;
        unordered_map<int, int> indegree;

        // indegree calculate
        for (auto i : adjList)
        {
            int src = i.first;
            for (auto nbr : i.second)
            {
                indegree[nbr]++;
            }
        }

        // put all nodes inside queue, which has indegree=0
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        // bfs logic
        while (!q.empty())
        {
            int fNode = q.front();
            q.pop();

            ans.push_back(fNode);
            // or we can do count++

            for (auto nbr : adjList[fNode])
            {
                indegree[nbr]--;
                // check for zero again
                if (indegree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
    }
};

int main()
{

    Graph g;
    // n -> number of nodes in graph
    int n = 8;
    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 1, 1);

    // g.addEdge(3,7,1);
    // g.addEdge(6,7,1);
    // g.addEdge(7,0,1);
    // g.addEdge(7,1,1);

    g.printAdjacencyList();
    cout << endl;

    vector<int> ans;
    // connected or disconnected
    g.topoSortBfs(n, ans);

    if (ans.size() == n)
    {
        cout << "It is a valid topo sort" << endl;
    }
    else
    {
        cout << "Cycle Present or Invalid topo sort " << endl;
    }

    cout << "Printing Topological Sort using BFS: " << endl;
    for (auto i : ans)
    {
        cout << i << ", ";
    }
    cout << endl;

    return 0;
}
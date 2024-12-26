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

    void topoSortDfs(int src, unordered_map<int, bool> &visited, stack<int> &ans)
    {
        visited[src] = true;
        for (auto nbr : adjList[src])
        {
            if (!visited[nbr])
            {
                topoSortDfs(nbr, visited, ans);
            }
        }
        ans.push(src);
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
    g.addEdge(3, 4, 1);
    g.addEdge(3, 5, 1);
    g.addEdge(4, 6, 1);
    g.addEdge(5, 6, 1);
    g.addEdge(6, 7, 1);

    g.printAdjacencyList();
    cout << endl;

    unordered_map<int, bool> visited;
    stack<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.topoSortDfs(i, visited, ans);
        }
    }

    cout << "Top Sort: " << endl;
    while (!ans.empty())
    {
        cout << ans.top()<<",";
        ans.pop();
    }

    return 0;
}
// shortest DistDijkstra

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

    void shortestDistDijkstra(int src, int n)
    {
        vector<int> dist(n, INT_MAX);
        set<pair<int, int>> st;
        // initial steps
        dist[src] = 0;
        st.insert({0, src});

        while (!st.empty())
        {
            // fetch the smallest or first element from set
            auto topElement = *(st.begin());
            int nodeDistance = topElement.first;
            int node = topElement.second;

            // pop from set
            st.erase(st.begin());

            for (auto nbr : adjList[node])
            {
                if (dist[node] + nbr.second < dist[nbr.first])
                {
                    auto result = st.find(make_pair(dist[nbr.first], nbr.first));
                    if (result != st.end())
                    {
                        st.erase(result);
                    }
                    dist[nbr.first] = dist[node] + nbr.second;
                    st.insert(make_pair(dist[nbr.first], nbr.first));
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

    g.addEdge(6, 3, 2, 1);
    g.addEdge(6, 1, 14, 1);
    g.addEdge(3, 1, 9, 1);
    g.addEdge(3, 2, 10, 1);
    g.addEdge(1, 2, 7, 1);
    g.addEdge(2, 4, 15, 1);
    g.addEdge(4, 3, 11, 1);
    g.addEdge(6, 5, 9, 1);
    g.addEdge(4, 5, 6, 1);

    g.printAdjList();

    g.shortestDistDijkstra(6, 7);

    return 0;
}

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
        for (auto i : adjList)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << ", " << j.second << "), ";
            }
            cout << endl;
        }
    }

    void shortestDistDijkstra(int src, int n)
    {
        vector<int> dist(n, INT_MAX);
        set<pair<int, int>> st;
        // intiial steps
        dist[src] = 0;
        st.insert(make_pair(0, src));

        while (!st.empty())
        {
            // fetch the smallest or first eklement from set
            auto topElement = *(st.begin());
            int nodeDistance = topElement.first;
            int node = topElement.second;

            // pop from set
            st.erase(st.begin());

            // neighbour traverse
            for (auto nbr : adjList[node])
            {
                if (nodeDistance + nbr.second < dist[nbr.first])
                {
                    // mujhe distance update krna h
                    // finding entry in set
                    auto result = st.find(make_pair(dist[nbr.first], nbr.first));
                    // if found, then remove
                    if (result != st.end())
                    {
                        st.erase(result);
                    }
                    // updation in dist array and set
                    dist[nbr.first] = nodeDistance + nbr.second;
                    st.insert(make_pair(dist[nbr.first], nbr.first));
                }
            }
        }

        cout << "printing ans:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << dist[i] << ", ";
        }
        cout << endl;
    }
};

int main()
{
    Graph g;

    g.addEdge(0, 1, 3, 0);
    g.addEdge(0, 3, 5, 0);
    g.addEdge(1, 0, 2, 0);
    g.addEdge(1, 3, 4, 0);
    g.addEdge(2, 1, 1, 0);
    g.addEdge(3, 2, 2, 0);
    g.addEdge(3, 2, 5, 0);
    g.addEdge(4, 3, -3, 0);
    g.addEdge(3, 1, 1, 0);

    g.printAdjList();

    g.shortestDistDijkstra(0, 3);
}
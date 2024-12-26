//  Check Cyclic Using Dfs

#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Graph
{
public:
        unordered_map<T, list<T>> adjList;

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
        bool checkCyclicUsingDfs(int src, unordered_map<int, bool> &visited, int parent)
        {
                visited[src] = true;

                for (auto nbr : adjList[src])
                {
                        if (!visited[nbr])
                        {
                                bool checkAageKaAns = checkCyclicUsingDfs(nbr, visited, src);
                                if (checkAageKaAns == true)
                                        return true;
                        }
                        if (visited[nbr] && nbr != parent)
                        {
                                // cycle present
                                return true;
                        }
                }
                return false;
        }
};

int main()
{

        Graph<int> g;
        // n -> number of nodes in graph
        int n = 5;
        g.addEdge(0, 1, 0);
        g.addEdge(1, 2, 0);
        g.addEdge(2, 3, 0);
        g.addEdge(3, 4, 0);
        g.addEdge(4, 0, 0);

        g.printAdjacencyList();
        cout << endl;

        bool ansDfs = false;
        unordered_map<int, bool> visitedDfs;
        for (int i = 0; i < n; i++)
        {
                if (!visitedDfs[i])
                {
                        ansDfs = g.checkCyclicUsingDfs(i, visitedDfs, -1);
                        if (ansDfs == true)
                                break;
                }
        }
        if (ansDfs == true)
                cout << "Cycle is Present" << endl;
        else
                cout << "Cycle Absent" << endl;

        return 0;
}
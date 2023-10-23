#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int v;
    list<int> *adj;

public:
    // constructor
    Graph(int v);

    // add child node to its parent node
    void addnode(int p, int c);

    // display graph
    void display(list<int> adj);

    void topo(int vis[], list<int>adj, stack<int>at );
};

Graph ::Graph(int v)
{
    // int x;
    this->v = v;
    adj = new list<int>[v];
}

void Graph::addnode(int p, int c)
{
    adj[p].push_back(c);
}


void topo(int vis[], list<int>adj, stack<int>st)
// void Graph ::display(list<int> adj)
// {
//     for (int i = 0; i < adj.size(); i++)
//     {

//         cout << i << "-->" << adj[i] << "\n";
//     }
// }

int main()
{
    int v;
    cin >> v;
    Graph g(v);

    vector<pair<int, int>> p;
    int x;
    cin >> x;
    for (auto it = 0; it < x; it++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({a, b});
    }

    for (auto it : p)
    {
        g.addnode(it.first, it.second);
    }
}
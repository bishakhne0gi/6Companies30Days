#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPath(int startNode, int desNode, vector<int> adj[], vector<int> &isVisited)
    {
        if (startNode == desNode)
        {
            return true;
        }
        isVisited[startNode] = true;
        for (int node : adj[startNode])
        {
            if (!isVisited[node])
            {
                if (isPath(node, desNode, adj, isVisited))
                {
                    return true;
                }
            }
        }
        return false;
    }
    int isBridge(int V, vector<int> adj[], int c, int d)
    {
        vector<int> isVisited(V, false);
        vector<int> adj2[V];
        for (int i = 0; i < V; i++)
        {
            for (int val : adj[i])
            {
                if ((i == c && val == d) || (i == d && val == c))
                {
                    continue;
                }
                adj2[i].push_back(val);
            }
        }
        bool bl = isPath(c, d, adj2, isVisited);

        return !bl;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int c, d;
        cin >> c >> d;

        Solution obj;
        cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}
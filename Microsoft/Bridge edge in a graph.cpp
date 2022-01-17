#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    map<pair<int, int>, int> mp;
    void helper(vector<int> adj[], vector<int> &vis, int i)
    {
        vis[i] = 1;
        for (int j : adj[i])
        {
            if (vis[j] == 0 and mp.find({i, j}) == mp.end())
            {
                helper(adj, vis, j);
            }
            else
            {
                continue;
            }
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d)
    {
        vector<int> vis(V, 0);
        helper(adj, vis, c);
        vector<int> vis1(V, 0);
        mp[{c, d}] = 1;
        mp[{d, c}] = 1;
        helper(adj, vis1, c);
        for (int i = 0; i < V; i++)
        {
            if (vis[i] != vis1[i])
                return 1;
        }
        return 0;
    }
};
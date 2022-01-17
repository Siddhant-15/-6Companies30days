#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossible(int N, vector<pair<int, int>> &pre)
    {
        // Code here
        vector<int> check(N, 0);
        for (pair<int, int> x : pre)
            check[x.first]++;
        int changes = 1;
        while (changes != 0)
        {
            changes = 0;
            vector<int> removals;
            for (int i = pre.size() - 1; i > -1; i--)
            {
                if (check[pre[i].second] == 0)
                {
                    check[pre[i].first]--;
                    changes++;
                    removals.push_back(i);
                }
            }
            for (auto x : removals)
            {
                pre.erase(pre.begin() + x);
            }
        }
        if (pre.size() != 0)
            return false;
        return true;
    }
};
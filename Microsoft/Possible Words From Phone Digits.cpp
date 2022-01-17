#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void generate(unordered_map<int, vector<char>> &mp, int a[],
                  int n, int idx, string ssf, vector<string> &ans)
    {

        if (idx == n)
        {
            ans.push_back(ssf);
            return;
        }

        auto v = mp[a[idx]];

        for (int i = 0; i < v.size(); i++)
        {
            generate(mp, a, n, idx + 1, (ssf + v[i]), ans);
        }
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        unordered_map<int, vector<char>> mp;

        mp[2] = {'a', 'b', 'c'};
        mp[3] = {'d', 'e', 'f'};
        mp[4] = {'g', 'h', 'i'};
        mp[5] = {'j', 'k', 'l'};
        mp[6] = {'m', 'n', 'o'};
        mp[7] = {'p', 'q', 'r', 's'};
        mp[8] = {'t', 'u', 'v'};
        mp[9] = {'w', 'x', 'y', 'z'};

        vector<string> v;
        generate(mp, a, N, 0, "", v);

        return v;
        //Your code here
    }
};
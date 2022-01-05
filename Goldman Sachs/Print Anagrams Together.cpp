#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;

        for (int i = 0; i < string_list.size(); i++)
        {
            string s = string_list[i];
            sort(s.begin(), s.end());
            m[s].push_back(string_list[i]);
        }
        for (auto k : m)
        {
            ans.push_back(k.second);
        }
        return ans;
        //code here
    }
};

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string, int> mp;
        int maxi = 0;
        string str;
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second > maxi)
            {
                maxi = it.second;
                str = it.first;
            }
        }
        ans.push_back(str);
        ans.push_back(to_string(maxi));
        return ans;
    }
};
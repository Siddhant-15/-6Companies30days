#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPair(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[(nums[i] % k + k) % k]++;
        if (mp[0] % 2 == 1)
            return false;
        for (int i = 1; i < k; i++)
        {
            if (mp[i] != mp[k - i])
            {
                return false;
            }
        }
        return true;
        // Code here.
    }
};
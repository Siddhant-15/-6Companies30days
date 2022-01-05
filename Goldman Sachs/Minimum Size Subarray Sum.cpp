#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int i = 0, j = 0, n = nums.size();
        int sum = 0;
        int ans = INT_MAX;
        while (j < n)
        {
            if (sum < target)
            {
                sum += nums[j];
            }
            if (sum >= target)
            {
                while (i <= j and sum >= target)
                {
                    sum -= nums[i];
                    ans = min(ans, j - i + 1);
                    i++;
                }
            }
            j++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
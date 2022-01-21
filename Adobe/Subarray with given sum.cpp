#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i = 0, j = 0, sum = 0;
        vector<int> ans;

        while (j < n)
        {
            sum += arr[j];
            while (sum >= s && ans.size() == 0)
            {
                if (sum == s)
                {
                    ans.push_back(i + 1);
                    ans.push_back(j + 1);
                    break;
                }
                sum -= arr[i];
                i++;
            }
            j++;
        }
        if (ans.size() == 0)
            ans.push_back(-1);

        return ans;
        // Your code here
    }
};
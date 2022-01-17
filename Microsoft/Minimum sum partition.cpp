#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int dp[101][10001];

    int helper(int arr[], int n, int sum, int total)
    {
        if (n == 0)
        {
            return abs((total - sum) - sum);
        }
        if (dp[n][sum] != -1)
        {
            return dp[n][sum];
        }

        return dp[n][sum] = min(helper(arr, n - 1, sum + arr[n - 1], total), helper(arr, n - 1, sum, total));
    }
    int minDifference(int arr[], int n)
    {
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            total += arr[i];
        }
        memset(dp, -1, sizeof(dp));
        return helper(arr, n, 0, total);
        // Your code goes here
    }
};
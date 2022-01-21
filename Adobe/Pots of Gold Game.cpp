#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dp[1000][1000];

    int goldGame(vector<int> a, int n, int i)
    {

        if (i > n)
            return 0;

        if (dp[i][n] != 0)
            return dp[i][n];

        return dp[i][n] = max(a[i] + min(goldGame(a, n, i + 2), goldGame(a, n - 1, i + 1)), a[n] + min(goldGame(a, n - 1, i + 1), goldGame(a, n - 2, i)));
    }
    int maxCoins(vector<int> &A, int n)
    {
        memset(dp, 0, sizeof(dp));
        return goldGame(A, n - 1, 0);
        //Write your code here
    }
};
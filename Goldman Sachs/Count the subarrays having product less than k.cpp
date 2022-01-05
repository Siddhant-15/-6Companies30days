#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
    {

        long long int p = 1;
        int res = 0;
        int i = 0, j = 0;

        while (j < a.size())
        {
            p *= a[j];

            while (p >= k)
            {
                p /= a[i];
                i++;
            }
            res += j - i + 1;
            j++;
        }
        return res;
    }
};
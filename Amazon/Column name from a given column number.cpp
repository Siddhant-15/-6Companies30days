#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string colName(long long int n)
    {
        string res = "";
        while (n--)
        {

            int r = n % 26;
            res = string(1, r + 'A') + res;
            n = n / 26;
        }
        return res;
        // your code here
    }
};
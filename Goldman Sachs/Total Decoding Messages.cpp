#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int CountWays(string s)
    {
        if (s.length() == 0 || s[0] == '0')
            return 0;
        if (s.length() == 1)
            return 1;

        long long int c1 = 1, c2 = 1;
        for (int i = 1; i < s.length(); i++)
        {
            long long int d = s[i] - '0';
            long long int d1 = (s[i - 1] - '0') * 10 + d;
            long long int count = 0;
            if (d > 0)
                count += c2;
            if (d1 >= 10 && d1 <= 26)
                count += c1;
            c1 = c2;
            c2 = count;
        }

        return c2;
        // Code here
    }
};
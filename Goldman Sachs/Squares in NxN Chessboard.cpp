#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long squaresInChessBoard(long long N)
    {
        long long squares_sum = ((N) * (N + 1) * ((2 * N) + 1)) / 6;
        return squares_sum;
        // code here
    }
};
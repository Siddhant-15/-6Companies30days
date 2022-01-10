#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestMountain(vector<int> &arr)
    {
        int n = arr.size(), maxi = 0;
        int i = 1;
        while (i < n)
        {
            int up = 0, down = 0;
            while (i < n && arr[i] == arr[i - 1])
            {
                i++;
            }
            while (i < n && arr[i] > arr[i - 1])
            {
                up++;
                i++;
            }
            while (i < n && arr[i] < arr[i - 1])
            {
                down++;
                i++;
            }
            if (up && down)
            {
                maxi = max(maxi, up + down + 1);
            }
        }
        return maxi;
        // Time Complexity : O(N)
        // Space Complexity : O(1)
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int> q;
        int i = 0, j = 0;

        vector<int> ans;
        while (j < n)
        {
            while (q.size() > 0 && q.back() < arr[j])
            {
                q.pop_back();
            }
            q.push_back(arr[j]);
            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                ans.push_back(q.front());
                if (arr[i] == q.front())
                    q.pop_front();

                i++;
                j++;
            }
        }
        return ans;
        // your code here
    }
};
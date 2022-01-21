#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string amendSentence(string s)
    {
        string ans = "";
        int i = 0, n = s.size();

        while (i < n)
        {
            if (i == 0 || isupper(s[i]))
            {
                ans += tolower(s[i]);
                i++;
                while (i < n && islower(s[i]))
                {
                    ans += s[i];
                    i++;
                }
                ans += " ";
            }
        }
        ans.pop_back();
        return ans;
        // your code here
    }
};
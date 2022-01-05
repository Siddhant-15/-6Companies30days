#include <bits/stdc++.h>
using namespace std;

string encode(string src)
{
    string ans = "";
    for (int i = 0; i < src.size(); i++)
    {
        int count = 1;
        while (src[i] == src[i + 1] && i < src.size() - 1)
        {
            count++;
            i++;
        }
        ans += src[i] + to_string(count);
    }
    return ans;

    //Your code here
}
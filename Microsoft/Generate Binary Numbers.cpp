#include <bits/stdc++.h>
using namespace std;

vector<string> generate(int N)
{
    vector<string> v;
    string s = "";
    for (int i = 1; i <= N; i++)
    {
        int q = i;
        while (q)
        {
            int p = q % 2;
            s = s + to_string(p);
            q = q / 2;
        }
        reverse(s.begin(), s.end());
        v.push_back(s);
        s = "";
    }
    return v;
    // Your code here
}
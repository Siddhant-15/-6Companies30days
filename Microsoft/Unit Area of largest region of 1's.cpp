#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>> &grid)
    {
        // Code here
        int ans = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                int count = 0;
                if (grid[i][j] == 1)
                {
                    dfs(grid, i, j, count);
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>> &grid, int i, int j, int &cnt)
    {
        if (i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == 0)
            return;
        cnt++;
        grid[i][j] = 0;
        dfs(grid, i + 1, j, cnt);
        dfs(grid, i - 1, j, cnt);
        dfs(grid, i, j + 1, cnt);
        dfs(grid, i, j - 1, cnt);
        dfs(grid, i - 1, j - 1, cnt);
        dfs(grid, i + 1, j - 1, cnt);
        dfs(grid, i - 1, j + 1, cnt);
        dfs(grid, i + 1, j + 1, cnt);
    }
};
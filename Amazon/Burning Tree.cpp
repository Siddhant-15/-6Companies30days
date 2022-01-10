#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
class Solution
{
public:
    int findMaxDistance(unordered_map<Node *, Node *> &mp, Node *t)
    {
        queue<Node *> q;
        q.push(t);
        unordered_map<Node *, int> vis;
        vis[t] = 1;
        int maxi = 0;
        while (!q.empty())
        {
            int s = q.size();
            int flag = 0;
            for (int i = 0; i < s; i++)
            {
                auto node = q.front();
                q.pop();
                if (node->left && !vis[node->left])
                {
                    flag = 1;
                    vis[node->left] = 1;
                    q.push(node->left);
                }
                if (node->right && !vis[node->right])
                {
                    flag = 1;
                    vis[node->right] = 1;
                    q.push(node->right);
                }
                if (mp[node] && !vis[mp[node]])
                {
                    flag = 1;
                    vis[mp[node]] = 1;
                    q.push(mp[node]);
                }
            }
            if (flag)
                maxi++;
        }
        return maxi;
    }
    Node *bfsToMapParents(Node *root, unordered_map<Node *, Node *> &mp, int target)
    {
        queue<Node *> q;
        q.push(root);
        Node *res;
        while (!q.empty())
        {
            Node *node = q.front();
            if (node->data == target)
                res = node;
            q.pop();
            if (node->left)
            {
                mp[node->left] = node;
                q.push(node->left);
            }
            if (node->right)
            {
                mp[node->right] = node;
                q.push(node->right);
            }
        }
        return res;
    }
    int minTime(Node *root, int target)
    {
        unordered_map<Node *, Node *> mp;
        Node *t = bfsToMapParents(root, mp, target);
        int maxi = findMaxDistance(mp, t);
        return maxi;
    }
};
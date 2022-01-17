#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node *nextRight; // This has garbage value in input trees
};

class Solution
{
public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
        if (root == NULL)
            return;

        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {

            Node *prev = NULL;
            Node *curr = NULL;
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                curr = q.front();
                q.pop();
                if (prev)
                    prev->nextRight = curr;
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
                prev = curr;
            }
        }
        return;
        // Your Code Here
    }
};
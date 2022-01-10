#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
class Solution
{
public:
    vector<int> v;
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root)
    {
        if (root == NULL)
        {
            v.push_back(-1);
            return v;
        }
        v.push_back(root->data);
        serialize(root->left);
        serialize(root->right);
        return v;

        //Your code here
    }

    int pre_index = 0;
    //Function to deserialize a list and construct the tree.
    Node *deSerialize(vector<int> &A)
    {
        if (pre_index == A.size() || A[pre_index] == -1)
        {
            pre_index += 1;
            return NULL;
        }
        Node *root = new Node(A[pre_index]);
        pre_index += 1;
        root->left = deSerialize(A);
        root->right = deSerialize(A);
        return root;
        //Your code here
    }
};
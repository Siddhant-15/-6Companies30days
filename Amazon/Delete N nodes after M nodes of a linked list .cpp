#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    void linkdelete(struct Node *head, int M, int N)
    {
        Node *curr = head;
        while (head)
        {
            for (int i = 1; i < M && curr; i++)
            {
                curr = curr->next;
            }
            if (!curr)
                return;
            Node *temp = curr;
            for (int j = 0; j <= N && temp; j++)
            {
                temp = temp->next;
            }
            curr->next = temp;
            curr = temp;
        }
        //Add code here
    }
};
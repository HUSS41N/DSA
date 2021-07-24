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
        left = NULL;
        right = NULL;
    }
};

Node *constructBST(int arr[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int mid = (start + end) / 2;
    Node *node = new Node(arr[mid]);
    node->left = constructBST(arr, start, mid - 1);
    node->right = constructBST(arr, mid + 1, end);
    return node;
}

void inorder(Node *root)
{
    if (!root)
    {
        return;
    }
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}

int main()
{
    int arr[] = {-10,-3,0,5,9};
    Node *root = constructBST(arr, 0, 5);
    inorder(root);
}

// Given the roots of two binary trees p and q, write a function to check if they are the same or not.

// Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

 

// Example 1:


// Input: p = [1,2,3], q = [1,2,3]
// Output: true
// Example 2:


// Input: p = [1,2], q = [1,null,2]
// Output: false
// Example 3:


// Input: p = [1,2,1], q = [1,1,2]
// Output: false

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
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

void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}

bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL and root2 == NULL)
    {
        return true;
    }
    if (root1 and root2)
    {
        if (root1->data != root2->data)
        {
            return false;
        }
        bool left = isIdentical(root1->left, root2->left);
        bool right = isIdentical(root1->right, root2->right);
        if (left and right)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);
    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
    root2->right->left = new Node(6);
    root2->right->right = new Node(7);
    if (isIdentical(root1, root2))
    {
        cout << "Identical Trees\n";
    }
    else
    {
        cout << "Not Indentical Trees\n";
    }
}

// Given a Binary Tree. Check whether all of its nodes have the value equal to the sum of their child nodes.


// Example 1:

// Input:
//      10
//     /
//   10 
// Output: 1
// Explanation: Here, every node is sum of
// its left and right child.
// Example 2:

// Input:
//        1
//      /   \
//     4     3
//    /  \
//   5    N
// Output: 0
// Explanation: Here, 1 is the root node
// and 4, 3 are its child nodes. 4 + 3 =
// 7 which is not equal to the value of
// root node. Hence, this tree does not
// satisfy the given conditions.

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

bool childrenSumParent(Node *root)
{
    if (root == NULL || (root->left == NULL && root->right==NULL))
    {
        return true;
    }
    int left_sum = 0;
    int right_sum = 0;
    if(root->left != NULL){
        left_sum = root->left->data;
    }
    if(root->right != NULL){
        right_sum = root->right->data;
    }
    if(root->data == left_sum + right_sum){
        bool left = childrenSumParent(root->left);
        bool right = childrenSumParent(root->right);
        if(left and right){
            return true;
        }
    }
    return false;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(10);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    cout << childrenSumParent(root);
}

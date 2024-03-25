#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* constructBST(int pre[], int* preIndex, int key,
                        int min, int max, int size)
{
    // Base case
    if (*preIndex >= size)
        return NULL;
 
    Node* root = NULL;
 
    // If current element of pre[] is in range, then
    // only it is part of current subtree
    if (key > min && key < max) {
        // Allocate memory for root of this
        // subtree and increment *preIndex
        root = new Node(key);
        *preIndex = *preIndex + 1;
 
        if (*preIndex < size) {
            // Construct the subtree under root
            // All nodes which are in range
            // {min .. key} will go in left
            // subtree, and first such node
            // will be root of left subtree.
            root->left = constructBST(pre, preIndex,
                                           pre[*preIndex],
                                           min, key, size);
        }
        if (*preIndex < size) {
            // All nodes which are in range
            // {key..max} will go in right
            // subtree, and first such node
            // will be root of right subtree.
            root->right = constructBST(pre, preIndex,
                                            pre[*preIndex],
                                            key, max, size);
        }
    }
 
    return root;
}
void printInorder(Node* Node)
{
    if (Node == NULL)
        return;
    printInorder(Node->left);
    cout << Node->data << " ";
    printInorder(Node->right);
}
int main(){
    int preorder[]= {10, 5, 1, 7, 40, 50};
    int preorderIndex = 0;
    int n = 6;
    // Node* root = constructBST(preorder,&preorderIndex,preorder[0],INT_MIN,INT_MAX,n-1);
    Node* root = constructBST(preorder,&preorderIndex,preorder[0],INT_MIN,INT_MAX,n);
    printInorder(root);
}

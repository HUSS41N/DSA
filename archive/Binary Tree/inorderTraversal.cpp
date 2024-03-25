#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data = value;
            left = NULL;
            right = NULL;
        }
};
// Algorithm Inorder(tree)
//    1. Traverse the left subtree, i.e., call Inorder(left-subtree)
//    2. Visit the root.
//    3. Traverse the right subtree, i.e., call Inorder(right-subtree)
void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left); // 1
    cout<<root->data<<" "; // 2
    inorderTraversal(root->right); // 3
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    inorderTraversal(root);
}

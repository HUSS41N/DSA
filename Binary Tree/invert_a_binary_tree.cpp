#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

void invertABinaryTree(Node* root,Node* &invertedRoot){
    if(root==NULL){
        invertedRoot = NULL;
        return;
    }
    invertedRoot = new Node(root->data);
    invertABinaryTree(root->left,invertedRoot->right);
    invertABinaryTree(root->right,invertedRoot->left);
}

void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    // inorderTraversal(root);
    Node* invertedRoot = NULL;
    invertABinaryTree(root,invertedRoot);
    inorderTraversal(invertedRoot);
}

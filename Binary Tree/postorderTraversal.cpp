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

// Algorithm Postorder(tree)
//    1. Traverse the left subtree, i.e., call Postorder(left-subtree)
//    2. Traverse the right subtree, i.e., call Postorder(right-subtree)
//    3. Visit the root.
void postorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    postorderTraversal(root);
}

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
int sumOfAllNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    return sumOfAllNodes(root->left) + sumOfAllNodes(root->right) + root->data;
}

int sumOfAllNodesStatic(Node* root){
    static int sum = 0;
    if(root==NULL){
        return sum;
    }
    sum += root->data;
    sumOfAllNodesStatic(root->left);
    sumOfAllNodesStatic(root->right);
    return sum;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<sumOfAllNodesStatic(root);
}

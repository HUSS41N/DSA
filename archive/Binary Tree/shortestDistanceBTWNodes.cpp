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
// algoritham
// 1. use LCA to find the lowest common ancestor of both the values
// 2. calculate the distance btw the LCA and both the values
// 3. Add them
Node* LCA(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* left = LCA(root->left,n1,n2);
    Node* right = LCA(root->right,n1,n2);
    if(left && right){
        return root;
    }
    if(!left && !right){
        return NULL;
    }
    return (root->left != NULL) ? left : right;
}

int findDistance(Node* root,int target,int distance){
    if(root==NULL){
        return -1;
    }
    if(root->data == target){
        return distance;
    }
    int left = findDistance(root->left,target,distance+1);
    if(left != -1){
        return left;
    }
    int right = findDistance(root->right,target,distance+1);
    if(right != -1){
        return right;
    }
}

int shortestDistance(Node* root,int n1,int n2){
    Node* lca = LCA(root,n1,n2);
    int d1 = findDistance(lca,n1,0);
    int d2 = findDistance(lca,n2,0);
    return d1+d2;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<shortestDistance(root,4,3);
}

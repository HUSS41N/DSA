#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* insertion(Node* root,int val){
    if(!root){
        return new Node(val);
    }
    if(root->data < val){
        root->right = insertion(root->right,val);
    } else {
        root->left = insertion(root->left,val);
    }
    return root;
}

Node* maxBST(Node* root,int &m){
    if(root==NULL){
        return NULL;
    }
    root->left = maxBST(root->left,m);
    root->right = maxBST(root->right,m);
    if(root){
        m = max(m,root->data);
    }
    return root;
}
Node* minBST(Node* root,int &m){
    if(root==NULL){
        return NULL;
    }
    root->left = minBST(root->left,m);
    root->right = minBST(root->right,m);
    if(root){
        m = min(m,root->data);
    }
    return root;
}

bool isValidBST(Node* root){
    int mx = INT_MIN;
    int mn = INT_MAX;
    maxBST(root->left,mx);
    minBST(root->right,mn);
    if(root->data > mx && root->data < mn){
        return true;
    }
    return false;
}

int main(){
Node* root = NULL;
      root = insertion(root,2);
    insertion(root, 2);
    if(isValidBST(root)){
        cout<<"YAY";
    }
}

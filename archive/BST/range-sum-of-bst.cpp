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

Node* constructBST(Node* &root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(root->data < val){
        root->right = constructBST(root->right,val);
    } else {
        root->left = constructBST(root->left,val);
    }
    return root;
}

void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int rangeSum(Node* root,int min,int max){
    static int ans = 0;
    if(!root){
        return 0;
    }
    if(root->data >= min && root->data <= max){
        ans += root->data;
    }
    rangeSum(root->left,min,max);
    rangeSum(root->right,min,max);
    return ans;
}
int main(){
    Node* root = NULL;
    root = constructBST(root,10);
    constructBST(root,5);
    constructBST(root,15);
    constructBST(root,3);
    constructBST(root,7);
    constructBST(root,18);
    cout<<rangeSum(root,7,15);
}

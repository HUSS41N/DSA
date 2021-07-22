// better solution
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBST(TreeNode* root,TreeNode* min,TreeNode* max){
        if(root==NULL){
            return true;
        }
        if(min != NULL && root->val <= min->val){
            return false;
        }
         if(max != NULL && root->val >= max->val){
            return false;
        }
        bool left = isBST(root->left,min,root);
        bool right = isBST(root->right,root,max);
        return left && right;
        
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* min = NULL;
        TreeNode* max = NULL;
        return isBST(root,min,max);
    }
};

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

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
int maxPathSumUtil(Node* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int left = maxPathSumUtil(root->left,ans);
    int right = maxPathSumUtil(root->right,ans);
    int tempAns = max(max(root->data,root->data + left + right),max(root->data + left ,root->data + right));
    ans = max(ans,tempAns);
    // 
    int singlePath = max(root->data,max(root->data + left ,root->data + right));
    return singlePath;
}
int maxPathSum(Node* root){
    int ans = INT_MIN;
    maxPathSumUtil(root,ans);
    return ans;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<maxPathSum(root);
}

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
// helping function to calculate height of tree
int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    return max(heightOfTree(root->left) , heightOfTree(root->right)) + 1;
}

// o(n)^2
int diameterOfTree(Node* root){
    // base condition
    if(root==NULL){
        return 0;
    }
    // calculate the height of right and left subtrees 
    int heightOfLeftSubtree = heightOfTree(root->left);
    int heightOfRightSubtree = heightOfTree(root->right);
    
    // hypothesis
    int diameterOfLeftSubtree = diameterOfTree(root->left);
    int diameterOfRightSubtree = diameterOfTree(root->right);

    return max(heightOfLeftSubtree + heightOfRightSubtree + 1,max(diameterOfLeftSubtree,diameterOfRightSubtree));
}
// o(n)
int solveDiameter(Node* root,int &res){
    if(root==NULL){
        return 0;
    }
    int left = solveDiameter(root->left,res);
    int right = solveDiameter(root->right,res);

    int temp = max(left,right) + 1;
    int ans = max(temp,1+left+right);
    // we are holding our answer in the res variable in main fuction
    res = max(res,ans);
    // temp return to keep the recursion 
    return temp;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<diameterOfTree(root);
}

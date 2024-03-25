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
int search(int arr[],int start,int end,int target){
    for(int i=start;i<=end;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[],int inorder[],int inorderStart,int inorderEnd){
    static int preorderIndex = 0;
    if(inorderStart>inorderEnd){
        return NULL;
    }

    // create a root
    // we know that the first index in preorder will be the main root of the tree (R->L->Right)
    Node* root = new Node(preorder[preorderIndex]);
    preorderIndex++;

    // if the newly created root node has no children we return 
    if(inorderStart==inorderEnd){
        return root;
    }

    // if the newly created node has childrens we find its position in the inorder array
    // after finding the position we are certain which element lies on left and right
    int inorderIndex = search(inorder,inorderStart,inorderEnd,root->data);

    // using the inorderINdex we just construct the remaingg tree
    root->left = buildTree(preorder,inorder,inorderStart,inorderIndex-1);
    root->right = buildTree(preorder,inorder,inorderIndex+1,inorderEnd);
    // return root
    return root;
}
void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left); // 1
    cout<<root->data<<" "; // 2
    inorderTraversal(root->right); // 3
}

void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
int main(){
    int preorder[] = {3,9,20,15,7};
    int inorder[]  = {9,3,15,20,7};
    Node* root = buildTree(preorder,inorder,0,4);
    inorderTraversal(root);
    preorderTraversal(root);
}

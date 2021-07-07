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
    int i;
    for(i=start;i<=end;i++){
        if(arr[i]==target){
            break;
        }
    }
    return i;
}
Node* buildTree(int inorder[],int postorder[],int inorderstart,int inorderend){
    static int postorderIndex = 4;
    if(inorderstart>inorderend){
        return NULL;
    }
    // we know for certain that the last element of the post order aray is the main root
    Node* root = new Node(postorder[postorderIndex--]);
    if(inorderstart==inorderend){
        return root;
    }
    // we find the index of the our current root in the main inorder array
    int rootIndexinInorderArray = search(inorder,inorderstart,inorderend,root->data);
    // we know for cetain that the right subtree will be aftet the rootindeex of the current
    root->right = buildTree(inorder,postorder,rootIndexinInorderArray+1,inorderend);
    // and left before that
    root->left = buildTree(inorder,postorder,inorderstart,rootIndexinInorderArray-1);
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


int main(){
    int inorder[] = {9,3,15,20,7};
    int postorder[] = {9,15,7,20,3};
    Node* root = buildTree(inorder,postorder,0,4);
    inorderTraversal(root);
}

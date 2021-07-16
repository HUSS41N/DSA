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

// check is the root is same as the value to be searched
// compare if the val is gretear than the root it means the value will lie in the right side and vice versa
Node* searchBST(Node* root,int val){
    if(root == NULL || root->data == val){
        return root;
    }
    if(val < root->data){
        return searchBST(root->left,val);
    }
    if(val > root->data){
        return searchBST(root->right,val);
    }
    return NULL;
}


Node* insertion(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val > root->data){
        root->right = insertion(root->right,val);
    }
    if(val < root->data){
        root->left = insertion(root->left,val);
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

int main(){
    Node* root = NULL;
    root = insertion(root,50);
    insertion(root, 30);
    insertion(root, 20);
    insertion(root, 40);
    insertion(root, 70);
    insertion(root, 60);
    insertion(root, 80);
    // inorder(root);
    cout<<searchBST(root,60)->data<<endl;
}

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

// if the value is greater than the root it will lie on the right side of the tree
// we will do the above step for the right subtree also util it find its correct position
Node* insertion(Node* root,int val){
    if(!root){
        // if the root is null insert the first node
        return new Node(val);
    }
    if(root->data < val){
        // Insert right node data, if the 'value'
        // to be inserted is greater than 'root' node data.
 
        // Process right nodes.
        root->right = insertion(root->right,val);
    } else {
        // vice versa
        root->left = insertion(root->left,val);
    }
    // return root after the insertion is done
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

void preorder(Node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" "; 
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
     if(!root){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" "; 
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
    // preorder(root);
     inorder(root);
    // postorder(root);
}

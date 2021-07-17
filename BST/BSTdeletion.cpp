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

Node* inorderSuccessor(Node* root){
    Node* current = root;
    while(current && current->left != NULL){
        current = current->left;
    }
    return current;
}
Node* deletion(Node* root,int val){
    // base case
    if(root==NULL){
        return NULL;
    }
    // if the value is greater than the root we know for sure that it lies into right side of the tree
    if(root->data < val){
        root->right = deletion(root->right,val);
    }
    // if the value is less than the root we know for sure that it lies into left side 
    else if (root->data > val){
        root->left = deletion(root->left,val);
    } 
    // if the root->data is equal to the val given we know that this is the node we want to delete
    else {
        // if the node has no children
        if(root->left == NULL & root->right == NULL){
            free(root);
            return NULL;
        }
        // if it has either one of the childeren we want to swap its value with the root and free the root
        else if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        } else {
            // if the root node we want to delete has two children
            // we first have to find the inorder successor of the node
            // means the smallest value in its right side to maintain its BST features
            Node* temp = inorderSuccessor(root->right);
            // swap the root with the inorder succesor
            root->data = temp->data;
            // delete the inorder succesor
            root->right = deletion(root->right,temp->data);
        }
       
    }
    return root;
}

Node* insertion(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(root->data<val){
        root->left = insertion(root->left,val);
    }else{
        root->right = insertion(root->right,val);
}
    return root;
}
// utility
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
    inorder(root);
    cout<<endl;
    deletion(root,50);
    inorder(root);
}

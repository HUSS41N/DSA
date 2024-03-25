#include <bits/stdc++.h>
using namespace std;

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

Node* LCA(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
//   check if the current root is eqal to given values
    if(root->data == n1 || root->data == n2 ){
        return root;
    }
//   try to find the solution in left and right sub tree
    Node* left = LCA(root->left,n1,n2);
    Node* right = LCA(root->right,n1,n2);
//   if we get both the values means the root will be the lca
    if(left && right) {
        return root;
    }
//   not found
    if(!left && !right){
        return NULL;
    }
    return (left != NULL) ? left : right;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<LCA(root,4,5)->data;
}

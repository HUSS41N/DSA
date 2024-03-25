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


void preorderIterative(Node* root){
    if(root==NULL){
        return;
    }
    stack<Node*> s;
    Node* current = root;
    while(!s.empty() || current != NULL){
        // while(current!=NULL){
        //     s.push(current);
        // cout<<current->data<<" ";
        //     current = current->left;
        // }
        // current = s.top();
        // s.pop();
        // current = current->right;
        if(current!=NULL){
            s.push(current);
            cout<<current->data<<" ";
            current = current->left;
        } else {
            current = s.top();
            s.pop();
            current = current->right;
        }
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    preorderIterative(root);
}

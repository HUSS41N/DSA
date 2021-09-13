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

// * Algoritham
// 1) Create an empty stack S.
// 2) Initialize current node as root
// 3) Push the current node to S and set current = current->left until current is NULL
// 4) If current is NULL and stack is not empty then 
//      a) Pop the top item from stack.
//      b) Print the popped item, set current = popped_item->right 
//      c) Go to step 3.
// 5) If current is NULL and stack is empty then we are done.

void inorderIterative(Node* root){
    if(root==NULL){
        return;
    }
    stack<Node*> s;
    Node* current = root;
    while(!s.empty() || current != NULL){
        // while(current!=NULL){
        //     s.push(current);
        //     current = current->left;
        // }
        // current = s.top();
        // s.pop();
        // cout<<current->data<<" ";
        // current = current->right;
        if(current!=NULL){
            s.push(current);
            current = current->left;
        } else {
            current = s.top();
            s.pop();
            cout<<current->data<<" ";
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
    inorderIterative(root);
}

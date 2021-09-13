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


void postorder(Node* root){
    if(root==NULL){
        return;
    }
    stack<Node*> s;
    stack<int> output;
    s.push(root);
    while(!s.empty()){
        Node* top = s.top();
        s.pop();
        output.push(top->data);
        if(top->left){
            s.push(top->left);
        }
        if(top->right){
            s.push(top->right);
        }
    }
    while(!output.empty()){
        cout<<output.top()<<" ";
        output.pop();
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    postorder(root);
}

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
// the approach is simple to use the level order traversal and keep the track of levels using the NUll;
// just print the last element of the each level
void leftView(Node* root){
    queue<Node*> q;
    if(root==NULL){
        return;
    }
    q.push(root);
    cout<<root->data<<" ";
    while(!q.empty()){
        int size = q.size();
        int s = size;
        while(size--){
            Node* n = q.front();
            q.pop();
            if(size==1){
                cout<<n->data<<" ";
            }
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);
            }
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    // root->right = new Node(3);
    // root->left->left = new Node(4);
    // root->left->left->left = new Node(500);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    leftView(root);
}

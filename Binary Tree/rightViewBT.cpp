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
void rightView(Node *root)
{
    queue<Node *> q;
    if (root == NULL)
    {
        return;
    }
    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";
    while (!q.empty())
    {
        Node *first = q.front();
        q.pop();
        if (first != NULL)
        {
            if (first->left)
            {
                q.push(first->left);
            }
            if (first->right)
            {
                q.push(first->right);
            }
        } else if (!q.empty())
        {   
            Node* back = q.back();
            cout<<back->data<<" ";
            q.push(NULL);
        }
    }
}

// without null
void rightView(Node* root){
    queue<Node*> q;
    if(root==NULL){
        return;
    }
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        while(size--){
            Node* front = q.front();
            q.pop();
            if(size==0){
                cout<<front->data<<" ";
            } 
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    rightView(root);
}

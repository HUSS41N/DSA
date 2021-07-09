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

void sumKlevel(Node* root,int k){
    if(root==NULL){
        return;
    }
    queue<Node*> que;
    int level = 0;
    int sum = 0;
    que.push(root);
    que.push(NULL);
    while(!que.empty()){
        Node* front = que.front();
        que.pop();
        if(front!=NULL){
            if(level == k){
                sum += front->data;
            }
            if(front->left){
                que.push(front->left);
            } 
            if(front->right){
                que.push(front->right);
            }
        } else if (!que.empty()){
            level++;
            que.push(NULL);
        }
    }
    cout<<sum<<endl;
}
void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    sumKlevel(root,2);
}

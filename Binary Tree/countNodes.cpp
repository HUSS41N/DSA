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
// count nodes recursivly
int countNodes(Node* root){
  if(root==NULL){
      return 0;
  }
  return countNodes(root->left) + countNodes(root->right) + 1;
}
// count nodes using static variable
int countNodes(Node* root){
    static int counter = 0;
    if(root==NULL){
        return 0;
    }
    counter++;
    countNodes(root->left);
    countNodes(root->right);
    return counter;
}


// count nodes using level order algoritham
int countNodes(Node* root){
    int counter = 0;
    if(root==NULL){
        return 0;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        counter++;
        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right);
        }
    }
    return counter;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<countNodes(root);
}

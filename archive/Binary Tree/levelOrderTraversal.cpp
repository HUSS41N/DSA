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
// printLevelorder(tree)
// 1) Create an empty queue q
// 2) temp_node = root /*start from root*/
// 3) Loop while temp_node is not NULL
//     a) print temp_node->data.
//     b) Enqueue temp_node’s children 
//       (first left then right children) to q
//     c) Dequeue a node from q.

void levelOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> que;
    que.push(root);

    while(!que.empty()){
        Node* front = que.front();
        que.pop();

        cout<<front->data<<" ";
        if(front->left){
            que.push(front->left);
        }
        if(front->right){
            que.push(front->right);
        }
    }
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    levelOrderTraversal(root);
}

// using NULL to keep track of different levels
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

void levelOrderTraversal(Node* root){
    if( root == NULL ){
        return;
    }
    queue<Node*> que;
    que.push(root);
    que.push(NULL);
    while(!que.empty()){
        Node* front = que.front();
        que.pop();
        if(front!=NULL){
             cout<<front->data<<" ";
            if(front->left){
                que.push(front->left);
            }
            if(front->right){
                que.push(front->right);
            }
        } else if(!que.empty()){
            que.push(NULL);
        }
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    levelOrderTraversal(root);
}

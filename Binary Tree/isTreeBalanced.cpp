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
int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    return max(heightOfTree(root->left),heightOfTree(root->right)) + 1;
}
// tree is balacnced if the absolute difference of left and right is <= 1
bool isTreeBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    if(!isTreeBalanced(root->left)){
        return false;
    }
    if(!isTreeBalanced(root->right)){
        return false;
    }
    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);
    if(abs(leftHeight-rightHeight)<=1){
        return true;
    } else {
        return false;
    }
}
int main(){
     Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(6);
    root->left->right->left = new Node(6);
    cout<<isTreeBalanced(root);
}

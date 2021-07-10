#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

int treeHeight(node* root){
    if(root==NULL){
        return 0;
    }
    int hleft = treeHeight(root->left);
    int hright = treeHeight(root->right);
    // add one to add the main root node height
    return max(hleft,hright) + 1;
}

int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    cout<<treeHeight(root);
}

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
 int maxLevelSum(Node* root) {
        // Your code here
        if(root==NULL){
            return 0;
        }
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        int sum = 0;
        int max_sum = INT_MIN;
        while(!q.empty()){
            struct Node* front = q.front();
            q.pop();
            if(front!=NULL){
                sum += front->data;
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
                cout<<sum<<" ";
            } else if (!q.empty()){
                cout<<endl;
                q.push(NULL);
                max_sum = max(max_sum,sum);
                sum = 0;
            }
        }
        return max(max_sum,sum);
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
    cout<<maxLevelSum(root);
}

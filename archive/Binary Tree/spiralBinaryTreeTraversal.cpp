#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    int counter = 1;
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        if (front != NULL)
        {
            cout << front->data << " ";
            if (counter % 2 == 0)
            {
                if (front->left)
                {
                    q.push(front->left);
                }
                if (front->right)
                {
                    q.push(front->right);
                }
            } else {
                if (front->right)
                {
                    q.push(front->right);
                }
                    if (front->left)
                {
                    q.push(front->left);
                }
            }
            counter++;
        }
        else if (!q.empty())
        {
            cout << endl;
            q.push(NULL);
        }
    }
}
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL){
            return {};
        }
        vector<int> level;
        queue<TreeNode*> q;
        q.push(root);
        level.push_back(root->val);
        res.push_back(level);
        q.push(NULL);
        level = {};
        int counter = 2;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front!=NULL){
                if(front->left){
                    q.push(front->left);
                    level.push_back(front->left->val);
                }
                if(front->right){
                    q.push(front->right);
                    level.push_back(front->right->val);
                }
            } else if(!q.empty()){
                if(counter%2==0){
                    reverse(level.begin(),level.end());
                }
                res.push_back(level);
                q.push(NULL);
                level = {};
                counter++;
            }
        }
        return res;
    }
int main()
{
    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    levelOrderTraversal(root);
}

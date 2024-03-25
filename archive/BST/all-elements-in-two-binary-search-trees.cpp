/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> res;
    void traverse(TreeNode* root){
        if(!root){
            return;
        }
        traverse(root->left);
        res.push_back(root->val);
        traverse(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        traverse(root1);
        traverse(root2);
        sort(res.begin(),res.end());
        return res;
    }
};

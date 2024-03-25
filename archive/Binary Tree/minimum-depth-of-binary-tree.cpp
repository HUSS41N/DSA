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
// https://leetcode.com/problems/minimum-depth-of-binary-tree/
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(!root->left){
            return minDepth(root->right) + 1;
        }
        if(!root->right){
            return minDepth(root->left) + 1;
        }
        return min(minDepth(root->left),minDepth(root->right)) + 1;
    }
};

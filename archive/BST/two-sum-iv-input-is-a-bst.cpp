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
    void returnSortedList(TreeNode* root){
        if(root==NULL){
            return;
        }
        returnSortedList(root->left);
        res.push_back(root->val);
        returnSortedList(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        returnSortedList(root);
        int start = 0;
        int end = res.size() - 1;
        while(start<end){
            int sum = res[start] + res[end];
            if(sum==k){
                return true;
            } else if (sum > k){
                end--;
            } else {
                start++;
            }
        }
         return false;
    }
};

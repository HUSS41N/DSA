/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* constructBST(vector<int> &res,int start,int end){
        if(start>end){
            return NULL;
        }
        int mid = (start+end)/2;
        TreeNode* root = new TreeNode(res[mid]);
        root->left = constructBST(res,start,mid-1);
        root->right = constructBST(res,mid+1,end);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> res;
        ListNode* temp = head;
        if(head==NULL){
            return NULL;
        }
        while(temp!=NULL){
            res.push_back(temp->val);
            temp = temp->next;
        }
        int n = res.size() - 1;
        TreeNode* root = NULL;
        root = constructBST(res,0,n);
        return root;
    }
};















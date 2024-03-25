class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool invert(struct Node* root1,struct Node* root2){
        if(root1==NULL and root2==NULL){
            return true;
        }
        if(!root1 || !root2){
            return false;
        }
        if(root1->data != root2->data){
            return false;
        }
        bool left = invert(root1->left,root2->right);
        bool right = invert(root1->right,root2->left);
        if(left == true and  right == true ){
            return true;
        }
        return false;
    }
    bool isSymmetric(struct Node* root)
    {
	    return invert(root,root);
    }
};

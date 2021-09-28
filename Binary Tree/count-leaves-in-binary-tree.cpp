int countLeaves(Node* root)
{
  // Your code here
  if(root==NULL){
      return 0;
  }
  if(root->left == NULL and root->right == NULL){
      return 1;
  } else {
      return countLeaves(root->left) + countLeaves(root->right);
  }
}
int countLeaves(Node* root)
{
  if(root==NULL){
      return 0;
  }
  if(root->left == NULL and root->right == NULL){
      return 1;
  }
  int left = countLeaves(root->left);
  int right = countLeaves(root->right);
  return left + right;
}

//define NULL (VS Code)
#include <stddef.h>
 
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };

void preorder(struct TreeNode* root, int* data, int* node) {
    if(root!=NULL){
    data[(*node)++] = root->val;
    preorder(root->left, data, node);
    preorder(root->right, data, node);
    }
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* solved = malloc(100*sizeof(int));
    *returnSize = 0;
    preorder(root,solved, returnSize);
    return solved;
    free(solved);
}
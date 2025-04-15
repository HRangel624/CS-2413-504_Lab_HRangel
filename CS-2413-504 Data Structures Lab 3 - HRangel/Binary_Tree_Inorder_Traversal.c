//define NULL (VS Code)
#include <stddef.h>

//Definition for a binary tree node.
struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };
void inorder(struct TreeNode* root, int* data, int* node) {
   if(root!=NULL){
   inorder(root->left, data, node);
   data[(*node)++] = root->val;
   inorder(root->right, data, node);
   }
}   
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
   int* solved = malloc(100*sizeof(int));
   *returnSize = 0;
   inorder(root,solved, returnSize);
   return solved;
   free(solved);
}
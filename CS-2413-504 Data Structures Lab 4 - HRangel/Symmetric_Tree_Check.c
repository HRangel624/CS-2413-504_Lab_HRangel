//Define NULL (VS Code)
#include <stddef.h>
//----------------------
//Define bool (VS Code)
#include <stdbool.h>
//-----------------------
// Definition for a binary tree node.
struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };

bool mirrored_or_no(struct TreeNode* c1, struct TreeNode* c2){
   if (c1 == NULL && c2 == NULL)
       return true;
   if (c1 == NULL || c2 == NULL)
       return false;
   if (c1->val != c2->val)
       return false;
   return mirrored_or_no(c1->left, c2->right) && mirrored_or_no(c1->right, c2->left);
}

bool isSymmetric(struct TreeNode* root) {
   if (root == NULL)
       return true;
   return mirrored_or_no(root->left, root->right);
}
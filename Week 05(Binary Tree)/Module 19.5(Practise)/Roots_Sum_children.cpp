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
    bool checkTree(TreeNode* root) {
        
        if ( root == NULL) return false;

        int sum = 0;

        if ( root->left != NULL)
        {
            sum = sum+ root->left->val;
        }
        if( root->right != NULL)
        {
            sum = sum + root->right->val;
        }

        if( sum == root->val) return true;
        else return false;


    }
};
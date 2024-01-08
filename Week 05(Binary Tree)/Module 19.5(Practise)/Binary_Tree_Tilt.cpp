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
    int findTilt(TreeNode* root) {
         int tilt = 0;
         sum_tilt ( root , tilt);
         return tilt;
    }

    int  sum_tilt( TreeNode*node , int & tilt)
    {
        if( node == NULL)
         {
            return 0;
        }
        int left_sum =  sum_tilt( node->left , tilt);
        int right_sum = sum_tilt( node->right , tilt);

        tilt += abs( left_sum - right_sum);

        return node->val + left_sum + right_sum;
    }

    
};



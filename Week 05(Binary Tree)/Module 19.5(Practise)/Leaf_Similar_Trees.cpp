/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
         stack<TreeNode*> stack1 , stack2;
         stack1.push(root1);
         stack2.push(root2);
         while( !stack1.empty() && !stack2.empty())
         {
             if( getleafval(stack1) != getleafval(stack2))
             {
                 return false;
             }
         }
         return stack1.empty() && stack2.empty();
    } 
    
    int getleafval( stack<TreeNode * > &stack)
    {
        while(true)
        {
            TreeNode* node = stack.top();
            stack.pop();

            if( node->right)
            {
                stack.push( node->right);
            }
            if ( node->left)
            {
                stack.push( node -> left);
            }

            if( !node->left && !node-> right )
            {
                return node->val;
            }
        }
    }












};


#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{   
    // Write your code here.
    queue<pair<TreeNode<int> * , int >> q;
    q.push({root, 1});
     
     while( !q.empty())
     {
         pair<TreeNode<int>* , int>pr = q.front();
         TreeNode<int>* Node = pr.first;
         int level = pr.second;
         q.pop();

         if( Node->val == searchedValue )
         {
             return  level;
         }

         if( Node->left)
         {
             q.push( {Node->left , level+1});
         }
         if (Node->right) {
             q.push({Node->right, level + 1});
         }
     }
}

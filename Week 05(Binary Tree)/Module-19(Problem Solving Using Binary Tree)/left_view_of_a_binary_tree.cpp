#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    bool frq[3005] = {false};
    queue<pair<TreeNode<int>* , int>> q;
    if( root)
      q.push({root, 1});

      vector<int>v;
  

    while( !q.empty())
    {
        pair<TreeNode<int>* , int>pr = q.front();
        TreeNode<int>* Node = pr.first;
        int level = pr.second;
        q.pop();


        if( frq[level]== false)
        {
            v.push_back( Node->data);
            frq[level] = true;
        }

        if( Node->left) 
              q.push( { Node->left, level+1});

        if( Node->right)
              q.push({Node->right, level + 1});
    }
    return v;
}

Problem Link:-   https://www.codingninjas.com/studio/problems/level-order-traversal_796002



#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
       vector<int> v;
      void Level_Order( BinaryTreeNode<int> *root)
      {
          if( root == NULL) return;

          queue<BinaryTreeNode<int>*>q;
          q.push( root);
          while( !q.empty())
          {
              BinaryTreeNode<int> * f = q.front();
              q.pop();

              v.push_back( f->val);

              if( f->left) q.push( f->left);
              if( f->right) q.push( f->right);
          }
      }
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{       
    //  Write your code here.
    v.clear();
    Level_Order(root);
    return v;
}
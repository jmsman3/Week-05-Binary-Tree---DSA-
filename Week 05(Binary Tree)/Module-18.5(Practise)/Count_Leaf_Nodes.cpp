/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
     int cnt_Leaf( BinaryTreeNode<int> * root)
     {
         if( root == NULL) return 0;
         if( root->left == NULL && root->right == NULL)
         {
             return  1;
         }
         else
         {
             int l = cnt_Leaf(root->left);
             int r = cnt_Leaf(root->right);
             return l+r;
         }
     }

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.

    return cnt_Leaf(root);
} 
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    // Write your code here
    // base case
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    return (l || r);
} 

//Bikolpo Neyom 

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
     bool check( BinaryTreeNode <int> * root, int p)
     {    
         if( root == NULL) return false ;
        bool l = check( root->left, p);
         bool  r = check ( root->right, p);

         return (root->data == p)|| l || r;
          
        
     }

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here

    return check( root,x);
}
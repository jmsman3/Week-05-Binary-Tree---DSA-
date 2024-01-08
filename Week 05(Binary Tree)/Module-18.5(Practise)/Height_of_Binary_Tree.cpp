Problem Link:- https://www.codingninjas.com/studio/problems/tree-height_4609628




/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int max_Hight( TreeNode<int> * root)
{  
    if ( root == NULL) return  0 ;
    int l = max_Hight(root->left);
    int r = max_Hight(root->right);

    return max( l,r) + 1;

}

int heightOfBinaryTree(TreeNode<int> *root)
{
	return max_Hight(root);
}

Problem link :-  https://www.codingninjas.com/studio/problems/inorder-traversal_3839605



/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

            vector<int> v;
        void in_order( TreeNode * root)
        {
            if( root ==NULL) return;
            in_order(root->left);

            v.push_back( root->data);
            in_order(root->right);
        }
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
     v.clear();
     in_order(root);
     return  v;
}
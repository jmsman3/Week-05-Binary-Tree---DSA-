#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/  
	long long int_left_sum ( BinaryTreeNode<int>* root)
	{  
		if( root== NULL) return  0;
		
		long long sum = 0;
		if( root->left != NULL)
		{
			sum += root->left->data;
		}

		sum += int_left_sum(root->left);
		sum += int_left_sum(root->right);

		return sum;
			
	} 

long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
		return  int_left_sum( root);
	
	
	
}
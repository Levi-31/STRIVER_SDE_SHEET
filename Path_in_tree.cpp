#include <bits/stdc++.h> 
using namespace std;
 
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};

vector<int> ans;
void fill(TreeNode<int>*root, int x, vector<int>&temp){
	if(root==NULL) return;
temp.push_back(root->data);
	if(root->data==x){
		ans=temp;
		return;
	} 
	
	
	fill(root->left,x,temp);
	fill(root->right,x,temp);
	temp.pop_back();
	
	
}


vector<int> pathInATree(TreeNode<int> *root, int x)
{
   vector<int>temp;
   fill(root,x,temp);
   return ans;
   
}

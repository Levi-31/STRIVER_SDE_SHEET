#include <bits/stdc++.h> 
using namespace std;

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


int lowestCommonAncestor(TreeNode<int> *root, int p, int q)
{
	if(root==NULL) return -1;

    if(root->data == p || root->data== q ) return root->data;

    int  leftN = lowestCommonAncestor(root->left, p, q);
  int rightN = lowestCommonAncestor(root->right, p, q);

    if(leftN!=-1 && rightN!=-1) return root->data;
    if(leftN!=-1) return leftN;

    return rightN;
}
#include <bits/stdc++.h> 
using namespace std;
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };



TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* p, TreeNode<int>* q)
{
	if(root==NULL) return root;

   if(root->data < p->data && root->data <q->data)
   return LCAinaBST(root->right,p,q);
    
    if(root->data > p->data && root->data >q->data)
    return LCAinaBST(root->left,p,q);

    return root;

}

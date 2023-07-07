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

*

TreeNode<int>* solve(vector<int>&preorder ,vector<int>&inorder,int start, int end, int &idx){
    if(start>end) return NULL;

    int rootVal=preorder[idx];

    int i=start;
    while(i<=end){
        if(inorder[i]==rootVal)break;
        i++;
    }
    idx++;

    TreeNode<int>* root= new TreeNode<int>(rootVal);
    root->left=solve(preorder,inorder,start,i-1,idx);
    root->right=solve(preorder,inorder,i+1,end,idx);

    return root;

}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	int n =preorder.size();

    int idx=0;
    return solve(preorder,inorder,0,n-1,idx);
}
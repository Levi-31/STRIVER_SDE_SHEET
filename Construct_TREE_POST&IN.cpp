#include <bits/stdc++.h>

using namespace std ;

   
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
   
   
   

TreeNode<int>* solve(vector<int>&postorder,vector<int>&inorder,int start , int end, int & idx){
     if(idx<0 || start>end ) return NULL;
     
     int rootVal= postorder[idx];

     int i=start;
     while(i<=end){
          if(inorder[i]==rootVal)break;
          i++;
     }
     idx--;
     

TreeNode<int>* root = new TreeNode<int>(rootVal);
root->right=solve(postorder,inorder,i+1,end,idx);
root->left=solve(postorder,inorder,start,i-1,idx);


return root;

}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postorder, vector<int>& inorder) 
{
	int n=postorder.size();
     int idx=n-1;

     return solve(postorder,inorder,0,n-1,idx);
}

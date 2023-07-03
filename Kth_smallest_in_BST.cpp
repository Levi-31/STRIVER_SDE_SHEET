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

   
  void solve(TreeNode<int> * root,int &k,int &count, int &n){
         if(root==NULL)
             return ;
      
      solve(root->left,k,count,n);
      if(++count == k){
          n = root->data;
          return;
      }
      solve(root->right,k,count,n);
      
      
    }

int kthSmallest(TreeNode<int> *root, int k)
{
    int count=0;
    int n;
	  solve(root,k,count,n);
        
        return n;
}



  
   
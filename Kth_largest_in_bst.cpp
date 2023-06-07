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


void solve(TreeNode<int>*root , int k ,int &count , int &ans){
    if(root==NULL) return ;
solve(root->right,k,count,ans);
count++;
    if(count==k){
        ans=root->data;
        return ;
    }
    solve(root->left,k,count,ans);
    
    
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    int count=0,ans=-1;
   solve(root,k ,count,ans);
   return ans;
}

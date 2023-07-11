#include <bits/stdc++.h> 
using namespace std;
     
      template <typename T>
    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

bool flag;
void solve(BinaryTreeNode<int>*root , int &ans,int x){
    if(root==NULL) return;

    solve(root->left,ans,x);
    if (root->data >= x && flag == false) {
        ans=root->data,ans;
        flag=true;
    }
    solve(root->right,ans,x);
}
int findCeil(BinaryTreeNode<int> *root, int x){
    int ans=-1;
    flag=false;
   solve(root,ans,x);

   return ans;
}
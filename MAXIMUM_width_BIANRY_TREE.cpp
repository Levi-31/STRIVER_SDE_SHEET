#include <bits/stdc++.h> 
using namespace std;
    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };



int getMaxWidth(TreeNode<int> *root)
{
    if(root==NULL) return 0;

    queue<pair<TreeNode<int>*,long long>>q;
    q.push({root,0});
    int maxW=-1;
    while(!q.empty()){
       
       int L = q.front().second;
      int n=q.size();
         maxW=max(maxW,n);
        

        while(n--){
           TreeNode<int>* node= q.front().first;
           long long idx= q.front().second;
           q.pop();
       if(node->left) q.push({node->left,(2*idx)+1});
       if(node->right)q.push({node->right,(2*idx)+2});
           
        }
    }
    return maxW;
}

// Here we dont need to count the null node present in between hence we can directly check with the size of the level

// where as if we need to check for thr complete binary tree hence we need to store the index and then calculate the maximum width
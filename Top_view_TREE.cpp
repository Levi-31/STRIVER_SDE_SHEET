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


vector<int> getTopView(TreeNode<int> *root) {
   vector<int> ans;
   if(root==NULL) return ans;

   queue<pair<TreeNode<int>*,int>>q;

   map<int,int>m;
   q.push({root,0});

   while(q.size()){
       auto p = q.front();
       q.pop();
       TreeNode <int>* node= p.first;

      if(m.find(p.second)==m.end())m[p.second]=node->val;

      if(node->left)q.push({node->left,p.second-1});
      if(node->right)q.push({node->right, p.second+1});

   }

   for(auto x:m){
       ans.push_back(x.second);
   }

   return ans;


}
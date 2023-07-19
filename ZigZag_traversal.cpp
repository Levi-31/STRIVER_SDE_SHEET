#include <bits/stdc++.h> 
using namespace std;

 template <typename T>
    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };



vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int> ans;
   if(root==NULL) return ans;

   queue<BinaryTreeNode<int> *> q;
   q.push(root);
   bool ltor=true;
   while(q.size()){
       int n=q.size();

       vector<int> row;

       for(int i=0;i<n;i++){
           auto node =q.front();
           q.pop();

        //  int index = (ltor)?i : n-i-1;
        //  row[index]=node->data;
        row.push_back(node->data);

         if(node->left)q.push(node->left);
         if(node->right)q.push(node->right);

       }
      if(ltor){
          for(auto x:row)ans.push_back(x);
      }
      else{
          for(int i=row.size()-1;i>=0;i--)ans.push_back(row[i]);
      }
      ltor=!ltor;
   }

   return ans;
}

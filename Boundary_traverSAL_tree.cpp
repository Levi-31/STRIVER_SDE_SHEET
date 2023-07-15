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


bool isLeaf(TreeNode<int>*root){
    if(root->left==NULL && root->right==NULL) return true;

    return false;
}

void addLeftBoundary(TreeNode<int>*root, vector<int>&res){
    TreeNode<int>* curr=root->left;
     while(curr){
         if(!isLeaf(curr))res.push_back(curr->data);
         if(curr->left) curr=curr->left;
         else curr=curr->right;
     }
}

void addLeaves(TreeNode<int>* root, vector<int>&res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
   if(root->left) addLeaves(root->left,res);
   if(root->right) addLeaves(root->right,res);
}
void addRightBoundary(TreeNode<int>*root, vector<int>&res){
    TreeNode<int>* curr=root->right;
   vector<int> temp;
    while(curr){
     if(!isLeaf(curr)){
         temp.push_back(curr->data);
     }
     if(curr->right) curr=curr->right;
     else curr=curr->left;
    }

    int n=temp.size();
    for(int i=n-1;i>=0;i--)res.push_back(temp[i]);

}
vector<int> traverseBoundary(TreeNode<int>* root){
    vector<int> res;
    if(root==NULL) return res;
    if(!isLeaf(root))res.push_back(root->data);

     addLeftBoundary(root,res);
     addLeaves(root,res);
     addRightBoundary(root,res);

     return res;
}
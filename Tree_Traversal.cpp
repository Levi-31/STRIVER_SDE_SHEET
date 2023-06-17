#include <bits/stdc++.h> 
using namespace std;

   template<typename T> 
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



vector<int> temp;
void inorder(BinaryTreeNode<int> * root){
    if(root==NULL) return;

    inorder(root->left);
     temp.push_back(root->data);
     inorder(root->right);
}
void postorder(BinaryTreeNode<int> * root){
    if(root==NULL) return;

    postorder(root->left);
     postorder(root->right);
     temp.push_back(root->data);
}
void preorder(BinaryTreeNode<int> * root){
    if(root==NULL) return;

    temp.push_back(root->data);
    preorder(root->left);
     preorder(root->right);
     
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<vector<int>>ans;

    inorder(root);
    ans.push_back(temp);
    temp.clear();

    preorder(root);
    ans.push_back(temp);
    temp.clear();

    postorder(root);
    ans.push_back(temp);
    temp.clear();

    return ans;
}
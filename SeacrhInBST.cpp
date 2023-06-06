#include <bits/stdc++.h> 
using namespace std;

    template <typename T> 
    class BinaryTreeNode {
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


bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root==NULL) return false;
      if(root->data == x) return true;

      if(x>root->data){
          return searchInBST(root->right,x);
      } 
      else{
          return searchInBST(root->left,x);
      }

}
#include <bits/stdc++.h>

using namespace std ;
 
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
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };


bool sameTree(BinaryTreeNode<int>*a, BinaryTreeNode<int>*b){
    if(a==NULL && b==NULL) return true;

    if(a==NULL || b==NULL ) return false;
    if(a->data != b->data) return false;

    return sameTree(a->right, b->left) && sameTree(a->left, b->right);
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
if(root==NULL) return true;
 return sameTree(root->left,root->right);


}
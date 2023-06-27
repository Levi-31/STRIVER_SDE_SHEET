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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

void inorder(vector<int>&in , BinaryTreeNode<int>*root){
    if(root==NULL) return;
     inorder(in,root->left);
     in.push_back(root->data);
     inorder(in,root->right);

}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    vector<int>in;
    inorder(in,root);
    int i=0,j=in.size()-1;
    while(i<j){
       if(in[i]+in[j]==k) return true;
       else if(in[i]+in[j]>k)j--;
       else i++;
    }

    return false;
}
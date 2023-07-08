#include <bits/stdc++.h> 
using namespace std;

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };


TreeNode<int>* solve(vector<int>&arr, int l, int h){
    if(l>h) return NULL;

    int mid=l+(h-l)/2;

    TreeNode<int>* root= new TreeNode<int>(arr[mid]);

    root->left = solve(arr,l,mid-1);
    root->right= solve(arr,mid+1,h);

    return root;
}

TreeNode<int>* convert(vector<int> &arr, int n)
{
    return solve(arr,0,n-1);
}
TreeNode<int>* preOrderTree(vector<int> &preorder){
    sort(preorder.begin(),preorder.end());

    return convert(preorder,preorder.size());
}
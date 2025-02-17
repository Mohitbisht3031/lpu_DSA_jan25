#include<bits/stdc++.h>
using namespace std;

class BSTnode{
    public:
    int val;
    BSTnode*left;
    BSTnode*right;
    BSTnode(int val){
        this->val = val;
    }
};

BSTnode* deleteBst(BSTnode*root,int val){
    if(!root)return root;
    if(root->val == val){
        if(!root->left && !root->right)return nullptr;
         (root->left ? root->left->val : root->right->val);
        if(root->left){
            root->val = root->left->val;
            root->left = deleteBst(root->left,root->val);
        }else{
            root->val = root->right->val;
            root->right = deleteBst(root->right,root->val);
        }
    }
    if(root->val > val){
        root->left = deleteBst(root->left,val);
    }
    root->right = deleteBst(root->right,val);

    return root;
}
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

// inorder traversal will give me a sorted sequence 
void print(BSTnode*root){
    if(!root)return;
    print(root->left);
    cout<<root->val<<endl;
    print(root->right);
    return;
}
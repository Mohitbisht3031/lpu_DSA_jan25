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

// 
BSTnode* insert(BSTnode*&root,int v){
    if(!root){
        return new BSTnode(v);
    }
    if(v > root->val){
        root->right = insert(root->right,v);
    }else{
        root->left = insert(root->left,v);
    }
    return root;
}

void insert(BSTnode*&root){
    int v;
    cin>>v;
    if(v == -1)return nullptr;
    insert(root,v);
    return;
}

BSTnode* make(){
    int v;
    cin>>v;
    if(v == -1)return nullptr;
    BSTnode*root = new BSTnode(v);
    insert(root);
    return root;
}
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

BSTnode* helper(vector<int>&arr,int s,int e){
    if(s > e)return nullptr;
    int mid = s+(e-s)/2;
    BSTnode*root = new BSTnode(arr[mid]);
    root->left = helper(arr,s,mid-1);
    root->right = helper(arr,mid+1,e);

    return root;
}

BSTnode* make(vector<int>&arr){
    if(arr.size() == 0)return nullptr;
    return helper(arr,0,arr.size()-1);
}
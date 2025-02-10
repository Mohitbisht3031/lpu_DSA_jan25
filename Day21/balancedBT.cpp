#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
    int val;
    BTnode*left;
    BTnode*right;
    BTnode(int val){
        this->val = val;
    }
};
// brute force approach
int h(BTnode*root){
    if(!root)return 0;
    int lh = h(root->left);
    int rh = h(root->right);
    return max(lh,rh)+1;
}

bool balancedBT(BTnode*root){
    if(!root)return 1;
    bool lans = balancedBT(root->left);
    bool rans = balancedBT(root->right);
    if(!lans || !rans)return 0;
    int lh = h(root->left);
    int rh = h(root->right);
    return abs(lh-rh) <= 1;
}

// 
int diff(BTnode*root,int&maxi){
    if(!root)return 0;
    int lh = diff(root->left,maxi);
    int  rh = diff(root->right,maxi);
    maxi = max(maxi,abs(lh-rh));
    return max(lh,rh)+1;
}
bool balancedBT(BTnode*root){
    if(!root)return 1;
    int maxi =0;
    diff(root,maxi);
    return maxi <= 1;
}
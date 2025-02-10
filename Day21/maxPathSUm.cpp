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

void pre(BTnode*root,int&maxi,int s){
    if(!root)return;
    if(!root->left && !root->right){
        s+=root->val;
        maxi = max(maxi,s);
        return;
    }
    pre(root->left,maxi,s+root->val);
    pre(root->right,maxi,s+root->val);
    return ;
}

int maxPathSum(BTnode*root){
    if(!root)return 0;
    int maxi = 0;
    pre(root,maxi,0);
    return maxi;
}
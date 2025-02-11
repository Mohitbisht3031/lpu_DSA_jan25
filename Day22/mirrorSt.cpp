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

bool pre(BTnode*r1,BTnode*r2){
    if(!r1 || !r2){
        return r1 == r2;
    }
    if(r1->val != r2->val)return 0;
    return pre(r1->left,r2->right) && pre(r1->right,r2->left);
}

bool mirrorST(BTnode*root){
    if(!root)return 1;
    return pre(root->left,root->right);
}
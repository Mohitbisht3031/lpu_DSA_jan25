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

BTnode* LCA(BTnode*root,int&n1,int&n2){
    if(!root)return root;
    if(root->val == n1 || root->val == n2)return root;
    BTnode*lans = LCA(root->left,n1,n2);
    BTnode*rans = LCA(root->right,n1,n2);
    if(lans && rans)return root;
    else if(!lans && rans)return rans;
    else if(!rans && lans)return lans;

    return nullptr;
}
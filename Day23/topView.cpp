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

void pre(BTnode*root,unordered_map<int,int>&mp,vector<BTnode*>&v,int l){
    if(!root)return;
    if(mp.count(l) == 0){
        mp[l]++;
        v.push_back(root->val);
    }
    pre(root->left,mp,v,l-1);
    pre(root->right,mp,v,l+1);
    return ;
}

vector<BTnode*> topView(BTnode*root){
    if(!root)return {};
    vector<BTnode*>v;
    unordered_map<int,BTnode*>mp;
    pre(root,mp,v,0);
    return v;
}
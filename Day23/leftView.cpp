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

// recursive
void pre(BTnode*root,int h,vector<BTnode*>&v){
    if(!root)return ;
    if(h > v.size())v.push_back(root->val);
    pre(root->left,h+1,v);
    pre(root->right,h+1,v);
    return;
}
vector<BTnode*> leftView(BTnode*root){
    if(!root)return {};
    vector<BTnode*>v;
    pre(root,1,v);
    return v;
}

// iterative approach 
vector<BTnode*> leftView(BTnode*root){
    if(!root)return {};
    queue<BTnode*>q;
    q.push(root);
    vector<BTnode*>v;
    while(!q.empty()){
        int s = q.size();
        v.push_back(q.front());
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
    }
    return v;
}
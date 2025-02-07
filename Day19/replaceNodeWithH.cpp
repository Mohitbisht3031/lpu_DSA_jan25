#include<bits/stdc++.h>
using namespace std;

class GTnode{
    public:
    int val;
    vector<GTnode*>child;
    GTnode(int val){
        this->val = val;
    }
};

// recursive
void helper(GTnode*&root,int h){
    if(!root)return ;
    root->val = h;
    for(int i = 0;i<root->child.size();i++){
        helper(root->child[i],h+1);
    }
    return ;
}

GTnode* replaceNodeWithH(GTnode*root){
    if(!root)return root;
    return helper(root,1);
}

// iteratively
GTnode* replaceNodeWithH(GTnode*root){
    if(!root)return root;
    queue<GTnode*>q;
    q.push(root);
    int c = 0;
    while(!q.empty()){
        int s = q.size();
        c++;
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            f->val = c;
            for(int j = 0;j<f->child.size();j++){
                q.push(f->child[j]);
            }
        }
    }
    return root;
}
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

// recursive approach
void helper(GTnode*root,int&val,int&ans){
    if(!root)return ;
    if(root->val > val && root->val < ans){
        ans = root->val;
    }
    for(int i = 0;i<root->child.size();i++){
        helper(root->child[i],val,ans);
    }
    return ;
}

int returnJustGreater(GTnode*root,int val){
    if(!root)return -1;
    int ans = INT_MAX;
    helper(root,val,ans);
    return ans;
}

// iteration
int returnJustGreater(GTnode*root,int val){
    if(!root)return -1;
    queue<GTnode*>q;
    q.push(root);
    int ans = INT_MAX;
    while(!q.empty()){
        auto f = q.front();
        q.pop();
        if(f->val > val && f->val < ans){
            ans = f->val;
        }
        for(int i = 0;i<f->child.size();i++){
            q.push(f->child[i]);
        }
    }
    return ans;
}
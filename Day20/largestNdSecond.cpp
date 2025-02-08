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
pair<int,int> largestNdSecond(GTnode*root){
    if(!root)return {};
    pair<int,int>ans = {root->val,root->val};
    for(int i = 0;i<root->child.size();i++){
        pair<int,int>t = largestNdSecond(root->child[i]);
        if(t.first > ans.first){
            ans.second = max{ans.first,t.second};
            ans.first = t.first;
        }else if(t.first > ans.second){
            ans.second = t.first;
        }
    }
    return ans;
}

// Iterative
pair<int,int> largestNdSecond(GTnode*root){
    if(!root)return {};
    queue<GTnode*>q;
    q.push(root);
    pair<int,int>ans = {root->val,root->val};
    while(!q.empty()){
        auto f = q.front();
        q.pop();
        if(f->val > ans.first){
            ans.second = ans.first;
            ans.first = f->val;
        }else if(f->val > ans.second){
            ans.second = f->val;
        }
        for(int i = 0;i<f->child.size();i++){
            q.push(f->child[i]);
        }
    }
    return ans;
}
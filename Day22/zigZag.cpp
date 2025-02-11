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

// Stack
vector<vector<int>> zigZag(BTnode*root){
    if(!root)return {};
    vector<vector<int>>ans;
    vector<int>v;
    stack<BTnode*>s1;
    stack<BTnode*>s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            auto t = s1.top();
            s1.pop();
            v.push_back(t->val);
            if(t->left)s2.push(t->left);
            if(t->right)s2.push(t->right);
        }
        ans.push_back(v);
        v.clear();
        while(!s2.empty()){
            auto t = s2.top();
            s2.pop();
            v.push_back(t->val);
            if(t->right)s1.push(t->right);
            if(t->left)s2.push(t->left);
        }
        ans.push_back(v);
        v.clear();
    }
    return ans;
}

// Dqueue
vector<vector<int>> zigZag(BTnode*root){
    if(!root)return {};
    dqueue<BTnode*>dq;
    vector<vector<int>>ans;
    vector<int>v;
    while(!dq.empty()){
        int s = dq.size();
        for(int i = 0;i<s.size();i++){
            auto f = dq.front();
            dq.pop();
            v.push_back(f->val);
            if(f->left)dq.push(f->left);
            if(f->right)dq.push(f->right);
        }
        ans.push_back(v);
        v.clear();
        s = dq.size();
        for(int i = 0;i<s;i++){
            auto b = dq.back();
            dq.pop_back();
            v.push_back(b->val);
            if(b->left)dq.push(b->left);
            if(b->right)dq.push(b->right);
        }
        ans.push_back(v);
        v.clear();
    }
    return ans;
}
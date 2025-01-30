#include <bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val){
        this->val = val ; // (*this).val=val;
        this->next = nullptr;
    }
};

// using extra space
LLnode* cycleStart(LLnode*&h){
    if(!h)return h;
    unordered_map<LLnode*,int>mp;
    LLnode*t = h;
    while(t){
        if(mp.count(t))return t;
        mp[t]++;
        t = t->next;
    }
    return nullptr;
}

// without extra space
LLnode* cycleStart(LLnode*&h){
    if(!h)return h;
    LLnode*s = h;
    LLnode*f = h;
    while(f){
        if(!f->next)return nullptr;
        s = s->next;
        f = f->next->next;
        if(s == f)break;
    }
    s = h;
    while(s!=f){
        s = s->next;
        f=f->next;
    }
    return s;
}
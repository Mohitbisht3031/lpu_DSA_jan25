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
// Extra space;
// Tc : O(N) , SC :O(n)
bool isPalin(LLnode*&h){
    vector<int>v;
    LLnode*t = h;
    while(t){
        v.push_back(t->val);
        t = t->next;
    }
    t = h;
    int i = v.size()-1;
    while(t){
        if(t->val != v[i])return 1;
        i--;
        t= t->next;
    }
    return 1;
}

// recursively
bool helper(LLnode*&h,LLnode*h2){
    if(!h2->next){
        bool ans = (h->val == h2->val);
        h = h->next;
        return ans;
    }
    if(!helper(h,h2->next))return 0;
    bool ans = (h->val == h2->val);
    h = h->next;
    return ans;
}

bool isPalin(LLnode*&h){
    return helper(h,h);
}
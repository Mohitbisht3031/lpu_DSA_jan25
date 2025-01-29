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

LLnode* middle(LLnode*&h){
    if(!h)return h;
    LLnode*s = h;
    LLnode*f = h;
    while(f){
        if(!f->next){
            return s;
        }
        s = s->next;
        f = f->next->next;
    }
    return s;
}


// iterative approach
LLnode* reverse(LLnode*h){
    if(!h)return ;
    LLnode*prev = NULL;
    LLnode*curr = h;
    LLnode*n = h->next;

    while(curr){
        curr->next = prev;
        prev = curr;
        curr = n;
        n = n->next;
    }
    return prev;
}

// recursive
LLnode* reverse(LLnode*h){
    if(!h || !h->next)return h;
    LLnode*nh = reverse(h->next);
    LLnode*l = h->next;
    l->next = h;
    h->next = nullptr;
    return nh;
}

bool Loop(LLnode*h){
    if(!h || !h->next)return 0;
    LLnode*s = h;
    LLnode*f = h;
    while(f){
        if(!f->next)return 0;
        s = s->next;
        f = f->next->next;
        if(s == f)return 1;
    }
    return 0;
}

int main(){return 0;}
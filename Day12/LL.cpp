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

LLnode* make(){
    int v = 0;
    cin >> v;
    if(v == -1)return nullptr;
    LLnode*h = new LLnode(v);
    LLnode* t = h;
    cin >> v;
    while(v!=-1){
        t->next = new LLnode(v);
        t = t->next;
        cin >> v;
    }
    return h;
}

void print(LLnode*&h){
    if(!h)return ;
    LLnode*th = h;
    while(th){
        cout<<th->val<<" "<<endl;
        th = th->next;
    }
    return;
}

int size(LLnode*&h){
    if(!h)return 0;
    LLnode*th = h;
    int c = 0;
    while(th){
        c++;
        th = th->next;
    }
    return c;
}

void addNode(LLnode*&h,int v,int front){
    if(!h){
        h = new LLnode(v);
        return;
    }
    LLnode*t = h ;
    if(!front){
        while(!t->next){
            t = t->next;
        }
        t->next = new LLnode(v);
        return;
    }
    t = new LLnode(v);
    t->next = h;
    h = t;
    return;
}

void Delete(LLnode*&h,int front){
    if(!h)return;
    LLnode*t = h;
    if(front){
        h = h->next;
        t->next = nullptr;
        delete t;
        return;
    }
    while(t->next->next){
        t = t->next;
    }
    LLnode*l = t->next;
    t->next = nullptr;
    delete l;
    return;
}

// recursive
int size(LLnode*h){
    if(!h)return 0;
    int l = size(h->next);
    return l+1;
}

int main(){
    LLnode*head =  make();
    print(head);
    int l = size(head);
    return 0 ;
}
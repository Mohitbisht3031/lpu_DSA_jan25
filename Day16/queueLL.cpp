#include<bits/stdc++.h>
using namespace std;

class LLnode{
    public:
    int val;
    LLnode*next;
    LLnode(int val){
        this->val = val;
        this->next = nullptr;
    }
};

class Queue{
    LLnode*h;
    LLnode*t;
    int s;
    public:
    Queue(){
        this->h = nullptr;
        this->t = nullptr;
        this->s = 0;
    }

    int size(){
        return s;
    }
    bool isEmpty(){
        return s == 0;
    }
    int front(){
        if(!h)return -1;
        return h->val;
    }
    int pop(){
        if(!h)return -1;
        int v = h->val;
        h = h->next;
        s--;
        return v;
    }
    void push(int v){
        LLnode* nn = new LLnode(v);
        if(!h){
            h = nn;
            t = h;
            return ;
        }
        t->next = nn;
        t = nn;
        return;
    }

};
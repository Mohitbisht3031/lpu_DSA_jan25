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

class Stack{
    LLnode*h;
    int s;
    public:
    Stack(){
        h = nullptr;
        s = 0;
    }

    int size(){
        return s;
    }
    bool isEmpty(){
        return s == 0;
    }
    void push(int val){
        LLnode*t = new LLnode(val);
        t->next = h;
        h = t;
    }
    int top(){
        if(s == 0)return -1;
        return h->val;
    }
    int pop(){
        if(s == 0)return -1;
        int e = h->val;
        h = h->ne  xt;
        return e;
    }

};
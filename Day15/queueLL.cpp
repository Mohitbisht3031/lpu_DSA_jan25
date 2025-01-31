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
    public:
};
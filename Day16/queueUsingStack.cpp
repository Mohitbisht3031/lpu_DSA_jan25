#include<bits/stdc++.h>
using namespace std;
// implement a queue using a single stack
class Queue{
    stack<int>stk;
    public:
    int size(){
        return stk.size();
    }
    bool isEmpty(){
        return size() == 0;
    }
    int pop(){
        if(size() == 0)return -1;
        if(size() == 1){
            int e = stk.top();
            stk.pop();
            return e;
        }
        int e = stk.top();
        stk.pop();
        int ans = pop();
        stk.push(e);
        return ans;
    }
    int front(){
        if(size() == 0)return -1;
        if(size() == 1)return stk.top();
        int e = stk.top();
        stk.pop();
        int ans = front();
        stk.push(e);
        return ans;
    }
    void push(int v){
        stk.push(v);
        return ;
    }
};
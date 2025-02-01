#include<bits/stdc++.h>
using namespace std;

class Stack{
    stack<int>stk;
    int minV = INT_MAX;
    public:
    Stack(){
    }
    int min(){
        return minV;
    }
    void push(int v){
        if(v < minV){
            stk.push(minV);
        }
        stk.push(v);
        minV = min(v,minV);
    }
    int pop(){
        if(stk.size() == 0)return -1;
        int e  = stk.top();
        if(stk.top() == minV){
            stk.pop();
            minV = stk.top();
            stk.pop();
        }
        return e;
    }
    
    
};
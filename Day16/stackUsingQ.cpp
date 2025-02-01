#include<bits/stdc++.h>
using namespace std;

// implement stack using a single queue
class Stack{
    queue<int>q;
    public:
    int size(){
        return q.size();
    }
    bool isEmpty(){
        return q.size() == 0;
    }
    int pop(){
        int s = size();
        if(s == 0)return -1;
        for(int i = 0 ;i<s-1;i++){
            q.push(q.front());
            q.pop();
        }
        int e = q.front();
        q.pop();
        return e;
    }
    int top(){
        int s = size();
        if(s == 0)return -1;
        for(int i = 0 ;i<s-1;i++){
            q.push(q.front());
            q.pop();
        }
        int e = q.front();
        q.pop();
        q.push(e);
        return e;
    }
    void push(int v){
        q.push(v);
        return;
    }
};
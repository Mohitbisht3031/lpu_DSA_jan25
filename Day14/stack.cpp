#include <bits/stdc++.h>
using namespace std;

// stack using vector/array
class Stack{
    vector<int>v;
    public:

    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.size() == 0;
    }
    int top(){
        if(v.size() == 0)return -1;
        return v.back();
    }
    int pop(){
        if(v.size() == 0)return -1;
        int e = v.back();
        v.pop_back();
        return e;
    }
    void push(int val){
        v.push_back(val);
    }
};
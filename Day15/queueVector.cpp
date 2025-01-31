#include<bits/stdc++.h>
using namespace std;

class Queue{
    vector<int>q;
    public:
    int size(){
        return q.size();
    }
    bool isEmpty(){
        return size() == 0;
    }

    void push(int val){
        q.push_back(val);
    }
    int pop(){
        if(q.size() == 0)return -1;
        int e = q[0];
        // i++;
        q.erase(q.begin());
        return e;
    }
    int front(){
        if(q.size() == 0)return -1;
        return q[0];
    }

};
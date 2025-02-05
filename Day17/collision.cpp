#include<bits/stdc++.h>
using namespace std;

vector<int> collision(vector<int>&asteroids){
    stack<int>stk;
    for(int i = 0;i<asteroids.size();i++){
        int e = asteroids[i];
        if(e < 0)while(!stk.empty() && stk.top() < abs(e))stk.pop();
        if(e > 0)stk.push(e);
    }
    vector<int>ans;
    while(!stk.empty()){
        ans.push_back(stk.top());
        stk.pop();
    }
    reverse(v.begin(),v.end());
    return v;
}
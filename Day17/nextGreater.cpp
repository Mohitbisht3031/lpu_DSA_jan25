#include<bits/stdc++.h>
using namespace std;

// TC : O(n^2) , SC : O(1)
vector<int> nextGreater(vector<int>&v){
    vector<int>ans(v.size(),-1);
    for(int i = 0;i<v.size();i++){
        int e = -1;
        for(int j = i+1;j<v.size();j++){
            if(v[i] < v[j]){
                e = v[j];
                break;
            }
        }
        if(e != -1)ans[i] = e;
    }
    return ans;
}

// using a stack !
// Tc : O(n) & SC:O(n)
vector<int> nextGreater(vector<int>&v){
    stack<int>stk;
    vector<int>ans(v.size(),-1);
    stk.push(v[v.size()-1]);
    for(int i = v.size()-2;i>=0;i--){
        while(!stk.empty() && stk.top() < v[i])stk.pop();
        if(!stk.empty())ans[i] = stk.top();
        stk.push(v[i]);
    }
    return ans;
}
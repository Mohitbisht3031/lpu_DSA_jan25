#include<bits/stdc++.h>
using namespace std;

// brute force approach to solve the question!
// TC : O(n^2) , SC : O(1)
vector<int> stockSpan(vector<int>&stock){
    vector<int>v(stock.size(),0);
    for(int i = 0;i<stock.size();i++){
        int c = 1;
        for(int j = i-1;j>=0;j--){
            if(stock[i] < stock[j]) break;
            c++;
        }
        v[i] = c;
    }
    return v;
}

// Stack
// TC : O(n) , SC:O(n)
vector<int> stockSpan(vector<int>&stock){
    vector<int>v(stock.size(),0);
    stack<int>stk;
    stk.push(0);
    v[0] = 1;
    for(int i =1;i<stock.size();i++){
        while(!stk.empty() && stock[stk.top()] < stock[i])stk.pop();
        v[i] = (stk.size() ==0 ? i+1 : (i-stk.top()));
        stk.push(i);
    }
    return v;
}
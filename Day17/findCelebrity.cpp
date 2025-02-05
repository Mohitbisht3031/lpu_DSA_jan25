#include<bits/stdc++.h>
using namespace std;

// TC : O(n^2) , SC : O(n);
int findCelebrioty(vector<vector<int>>&mat){
    vector<int>in(mat.size(),0);
    vector<int>out(mat.size(),0);
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j]){
                in[j]++;
                out[i]++;
            }
        }
    }
    for(int i = 0;i<mat.size();i++){
        if(in[i] == mat.size() && out[i] == 0)return i;
    }
    return -1;
}

// Stack
// TC : O(n), SC:O(n)
int findCelebrioty(vector<vector<int>>&mat){
    stack<int>stk;
    int c = -1;
    for(int i =2;i<mat.size();i++){
        stk.push(i);
        if(stk.size() > 1){
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            if(mat[a][b]){
                stk.push(b);
            }else{
                stk.push(a);
            }
        }
    }
    c = stk.top();
    stk.pop();
    for(int i = 0;i<mat.size();i++){
        if(mat[c][i])return -1;
    }
    return c;
}
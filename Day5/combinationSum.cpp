#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>&arr,int i,int t,vector<vector<int>>&ans,vector<int>v,unordered_map<vector<int>,int>&mp){
    if(t < 0 || i >= arr.size())return;
    if(t == 0){
        if(mp.count(v) == 0){
            mp[v]++;
            ans.push_back(v);}
        return;
    }
    v.push_back(arr[i]);
    helper(arr,i,t-arr[i],ans,v,mp);
    v.pop_back();
    helper(arr,i+1,t,ans,v,mp);
    return;
}

vector<vector<int>> combinationSum(vector<int>&arr,int t){
    unordered_map<vector<int>,int>mp;
    vector<vector<int>>ans;
    vector<int>v;
    helper(arr,0,t,ans,v,mp);
    return ans;
}

int main(){
    return 0;
}
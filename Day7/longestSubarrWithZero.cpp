#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>&arr){
    int maxi = 0;
    for(int i =0;i<arr.size();i++){
        int s = 0;
        for(int j = i;j<arr.size();i++){
            s+=arr[j];
            if(s == 0){
                maxi = max(maxi,j-i+1);
            }
        }
    }
    return maxi;
}

int longestSubarray(vector<int>&arr){
    unordered_map<int ,int>mp;
    int s = 0;
    int maxi = 0 ;
    for(int i = 0;i<att.size();i++){
        s+=arr[i];
        if(mp.count(s)){
            maxi = max(maxi,i-mp[s]);
            continue;
        }
        mp[s]++;
    }
    return maxi;
}
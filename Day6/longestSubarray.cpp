#include<bits/stdc++.h>
using namespace std;

// brute force approach 
// O(n^2) , SC: O(1);
int longestSubarray(vector<int>&arr,int k){
    int maxi = 0;
    for(int i = 0;i<arr.size();i++){
        int s = 0;
        for(int j = i;j<arr.size();j++){
            s+=arr[j];
            if(s == k)maxi = max(maxi,j-i+1);
        }
    }
    return maxi;
}


// TC : O(n) , SC : O(n) -> ??
int longestSubarray(vector<int>&arr,int k){
    unordered_map<int,int>mp;
    int s = 0 ;
    int maxi = 0;
    for(int i = 0;i<arr.size();i++){
        s+=arr[i];
        if(s == k)maxi = max(maxi,i+1);
        if(mp.count(s-k)){
            maxi = max(maxi,i-mp[s-k]+1);
        }
        if(mp.count(s))mp[s] = i;
    }
    return maxi;
}

int longestSubarray(vector<int>&arr,int k){
    int i = 0;
    int j = 0;
    int s = 0;
    int maxi = 0;
    while(j < arr.size()){
        s+=arr[j];
        j++;
        if(s == k)maxi = max(maxi,j-i+1);
        while(s > k){
            s-=arr[i];
            i++;
        }
    }

    return maxi;
}
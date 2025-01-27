#include <bits/stdc++.h>
using namespace std;

// TC: O(nlogn) , SC:O(1)
bool check(vector<int>&wt,int &d,int cap){
    int day = 1;
    int s = 0;
    for(int i = 0;i<wt.size();i++){
        if(s+wt[i] > cap){
            s = wt[i];
            day++;}
        else s+=wt[i];
    }
    return day <= d;
}

int shipCap(vector<int>&wt,int d){
    int hi = accumulate(wt.begin(),wt.end(),0);
    if(d == 1)return hi;
    int lo = *max_element(wt.begin(),wt.end());
    int ans = INT_MAX;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(check(wt,d,mid)){
            ans = min(ans,mid);
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    return ans;
}
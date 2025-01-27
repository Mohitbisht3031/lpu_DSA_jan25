#include <bits/stdc++.h>
using namespace std;

//  TC : O(nlogn) , SC:O(1)
bool check(vector<int>&arr,int&h,int s){
    int t = 0;
    for(int p : piles){
        t+=(p-1) / s+1;
        if(t > h)return 0;
    }
    return 1;
}

int minSpeed(vector<int>&piles,int h){
    int lo = 1;
    int hi = accumulate(piles.begin(),piles.end(),0);
    int ans = INT_MAX;
    while(lo <= hi){
        int mid = lo+(hi-lo)/2;
        if(check(piles,h,mid)){
            ans = min(ans,mid);
            hi = mid-1;
        }else lo =mid+1;
    }
    return ans;
}
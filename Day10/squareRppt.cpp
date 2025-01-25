#include <bits/stdc++.h>
using namespace std;
// linear searc Tc : O(x)
int sqrRoot(int x){
    int ans= 1;
    for(int i =1;i<x/2;i++){
        int s = i*i;
        if(s <= x)ans = i;
        else break;
    }
    return ans;
}

// binary search TC : O(logx)
int sqrRoot(int x){
    int lo = 1;
    int hi = x/2;
    int ans = 1;
    while(lo <= hi){
        int mid = lo+(hi-lo)/2;
        int s = mid*mid;
        if(s == x)return mid;
        if(s < x){
            ans = mid;
            lo = mid+1;
        }else{
            hi = mid-1;
        }
    }
    return ans;
}
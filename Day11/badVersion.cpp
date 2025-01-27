#include <bits/stdc++.h>
using namespace std;

// Linear search TC : O(n) , SC : O(1)
int firstBadVersion(int n){
    for(int i = 1;i<=n;i++){
        if(isBadVersion(i))return i;
    }
    return -1;
}

// TC : O(logn) , Sc:O(1);
int firstBadVersion(int n){
    int lo = 1;
    int hi = n;
    int ans = n;
    while(lo <= hi){
        int mid = lo+(hi-lo)/2;
        if(isBadVersion(mid)){
            ans = min(ans,mid);
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
    return ans;
}
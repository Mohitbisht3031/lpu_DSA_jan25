#include<bits/stdc++.h>
using namespace std;

int findH(vector<int>&h,int i,int lh){
    int ans = -1;
    if(lh){
        for(int j = i-1;j>=0;j--){
            if(h[i] < h[j])ans = h[j];
        }
    }else{
        for(int j = i+1;j<h.size();j++){
            if(h[j] > h[i])ans = h[j];
        }
    }
    return ans;
}

int trappedWater(vector<int>&h){
    int ans = 0;
    for(int i = 1;i<h.size();i++){
        int lh = findH(h,i,1);
        int rh = findH(h,i,0);
        if(lh != -1 && rh != -1)ans+=(min(lh,rh)-h[i]);
    }
    return ans;
}

// monotonus stack
vector<int> findH(vector<int>&h,int l){
    vector<int>ans(h.size(),-1);
    if(l){
        int ind = 0;
        for(int i = 1;i<h.size();i++){
            if(h[ind] > h[i]){
                ans[i] = ind;
            }else ind = i;
        }
    }else{
        int ind = h.size()-1;
        for(int i = h.size()-2;i>=1;i--){
            if(h[ind] > h[i]){
                ans[i] = ind;
            }else ind = i;
        }
    }
    return ans;
}
int trappedWater(vector<int>&h){
    vector<int>lh = findH(h,1);
    vector<int>rh = findH(h,0);
    int ans = 0;
    for(int i = 1;i<h.size()-1;i++){
        ans+=(min(h[lh[i]],h[rh[i]])-h[i]);
    }
    return ans;
}
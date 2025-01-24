#include<bits/stdc++.h>
using namespace std;

// TC:(nlogn) , SC:O(n)
int nonOverlapping(vector<vector<int>>&arr){
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    ans.push_back(arr[1]);
    for(int i = 1;i<arr.size();i++){
        if(ans.back()[1] > arr[i][0]){
            continue;
        }
        ans.push_back(arr[i]);
    }
    return arr.size() - ans.size();
}
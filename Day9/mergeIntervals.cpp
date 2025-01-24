#include <bits/stdc++.h>
using namespace std;

// TC:O(nlogn),SC : O(n)
vector<vector<int>> mergeIntervals(vector<vector<int>>&arr){
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    ans.push_back(arr[0]);
    for(int i = 0;i<arr.size();i++){
        if(ans.back()[1] >= arr[i][0]){
            ans.back()[1] = max(ans.back()[1],arr[i][1]);
            continue;
        }
        ans.push_back(arr[i]);
    }
    return ans;
}

int main() {
    vector<vector<int>>v ={{1,3},{2,6},{10,12},{15,18}};
    auto ans = mergeIntervals(v);
    for(auto e : ans){
        cout<<e[0]<<" "<<e[1]<<endl;
    }
    return 0;
}
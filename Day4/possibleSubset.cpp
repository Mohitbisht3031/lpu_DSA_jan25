#include<bits/stdc++.h>
using namespace std;

void helper(vector<int>&arr,int i,vector<vector<int>>&ans,vector<int>&v){
    if(i >= arr.size()){
        ans.push_back(v);
        return;
    }
    v.push_back(arr[i]);
    helper(arr,i+1,ans,v); // it will make the remaining subset with including ith element in the subset
    v.pop_back();
    helper(arr,i+1,ans,v); //it will make the subset without including the current element

    return ;
}

vector<vector<int>> allSubsets(vector<int>&arr){
    if(arr.size() == 0)return {arr};
    vector<vector<int>>ans;
    vector<int>v;
    helper(arr,0,ans,v);
    return ans;
}
int main() {
    vector<int>arr = {1};
    vector<vector<int>>vec = allSubsets(arr);
    for(int i = 0;i<vec.size();i++){
        for(int j =0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
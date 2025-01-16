#include<bits/stdc++.h>
using namespace std;

// generic
vector<int> rotate(vector<int>&arr,int r){
    vector<int>v(arr.size());
    for(int i =0;i<arr.size();i++){
        v[((i+r)%arr.size())] = arr[i];
    }
    return v;
}

int main(){
    return 0;
}
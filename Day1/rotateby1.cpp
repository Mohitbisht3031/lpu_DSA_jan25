#include<bits/stdc++.h>
using namespace std;

// generic
vector<int> rotate(vector<int>&arr){
    vector<int>v(arr.size());
    for(int i =0;i<arr.size();i++){
        v[((i+1)%arr.size())] = arr[i];
    }
    return v;
}

// alternative only for 1 ele
vector<int> rotate(vector<int>&arr){
    int t = arr[arr.size()-1];
    for(int i = arr.size()-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = t;
    return arr;
}

int main(){return 0;}
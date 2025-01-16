#include<bits/stdc++.h>
using namespace std;

vector<int> rotated(vector<int>&v,int r){
    reverse(v.begin(),v.end());//reverse the entire array
    reverse(v.begin(),v.begin()+r); // reverse the starting r elements
    reverse(v.begin()+r,v.end()); //reverse the last half of the array
    return v;
}

int main(){return 0;}
#include<bits/stdc++.h>
using namespace std;

/*
we are provided with an int vector and we are supposed to return the largest and second largest
ele present in the vector
*/
pair<int,int> LargestNumber(vector<int>&arr){
    pair<int,int>p= {arr[0],arr[0]};
    for(int i = 1;i<arr.size();i++){
        if(arr[i] > p.first){
            p.second = p.first;
            p.first = arr[i];
        }else if(arr[i] > p.second && arr[i] != p.frist){
            p.second = arr[i];
        }
    }

    return p;
}

int main(){return 0;}
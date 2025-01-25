#include <bits/stdc++.h>
using namespace std;

// linear search works
bool linearSearch(vector<int>&arr,int &t){
    for(int i = 0;i<arr.size();i++){
        if(arr[i] == t)return 1;
    }
    return 0;
}

// if the given array is sorted then we can use binary search to reduce the time complexity
//TC : O(logn)
bool binarySearch(vector<int>&arr,int &t){
    int s = 0;
    int e = arr.size()-1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] == t)return 1;
        else if(arr[mid] > t){
            e = mid-1;
        }else s = mid+1;
    }
    return 0;
}